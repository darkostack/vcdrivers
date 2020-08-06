cmake_minimum_required (VERSION 3.7)

project(vcdrivers)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_C_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-Os")
set(CMAKE_C_FLAGS_RELEASE "-Os")

if (${CPU_NAME} STREQUAL sirius)
    set(CPU_ARCH cortex-m3)
endif()

set(CMAKE_EXE_LINKER_FLAGS 
    "-mthumb -mcpu=${CPU_ARCH} -mfloat-abi=soft -Wl,--gc-sections -specs=nano.specs -specs=nosys.specs" 
    CACHE INTERNAL "")

set(CMAKE_C_FLAGS 
    "-mcpu=${CPU_ARCH} -mthumb -mfloat-abi=soft -ffunction-sections -fdata-sections -fno-strict-aliasing -fno-builtin -fshort-enums"
    CACHE INTERNAL ""
)

set(CMAKE_CXX_FLAGS 
    "-mcpu=${CPU_ARCH} -mthumb -mfloat-abi=soft -ffunction-sections -fdata-sections -fno-strict-aliasing -fno-builtin -fshort-enums"
    CACHE INTERNAL ""
)

set(COMMON_COMPILE_FLAGS
    -Wall
    -Wextra
    -Wshadow
    -Werror
    $<$<COMPILE_LANGUAGE:CXX>:
       -std=gnu++14
       -fno-exceptions
       -fno-rtti
    >
)

add_library(vcdrivers_common
    ${CMAKE_CURRENT_SOURCE_DIR}/source/stdiobase.c
)

target_include_directories(vcdrivers_common PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(vcdrivers_common PRIVATE ${COMMON_COMPILE_FLAGS})

add_executable(vcdrivers_test ${CMAKE_CURRENT_SOURCE_DIR}/main.c)

target_link_libraries(vcdrivers_test PRIVATE
    vcdrivers_common
    vcdrivers_${CPU_NAME}_periph
    vcdrivers_${CPU_NAME}
)

if (${CPU_NAME} STREQUAL sirius)

    add_library(vcdrivers_sirius_periph
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/periph/gpio.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/periph/irq.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/periph/tim.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/periph/uart.c
    )

    target_include_directories(vcdrivers_sirius_periph PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include/cmsis
    )

    target_include_directories(vcdrivers_sirius_periph PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius
    )

    target_compile_options(vcdrivers_sirius_periph PRIVATE ${COMMON_COMPILE_FLAGS})

    add_library(vcdrivers_sirius
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/cortexm.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/cpu.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/syscalls.c
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/vectors.c
    )

    target_include_directories(vcdrivers_sirius PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include/cmsis
    )

    target_include_directories(vcdrivers_sirius PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius
    )

    target_compile_options(vcdrivers_sirius PRIVATE ${COMMON_COMPILE_FLAGS})

    set_target_properties(vcdrivers_test PROPERTIES LINK_DEPENDS
        ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/sirius_default.ld
    )

    set_target_properties(vcdrivers_test PROPERTIES LINK_FLAGS
        "-L${CMAKE_CURRENT_SOURCE_DIR}/build -Wl,--whole-archive -lvcdrivers_common -lvcdrivers_sirius_periph -lvcdrivers_sirius -Wl,--no-whole-archive -T ${CMAKE_CURRENT_SOURCE_DIR}/source/sirius/sirius_default.ld -lc -lnosys -lm -lstdc++"
    )

    add_custom_command(OUTPUT vcdrivers_test.bin
        COMMAND arm-none-eabi-objcopy -O binary vcdrivers_test vcdrivers_test.bin
        DEPENDS vcdrivers_test
    )
    add_custom_target(vcdrivers_test_bin ALL DEPENDS vcdrivers_test.bin)
    add_custom_target(vcdrivers_test_size ALL
        COMMAND arm-none-eabi-size --format=berkeley vcdrivers_test
        DEPENDS vcdrivers_test
    )

endif()
