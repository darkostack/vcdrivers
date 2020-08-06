how to build:

mkdir build && cd build

cmake .. -DCMAKE_TOOLCHAIN_FILE=./../toolchain/armgcc.cmake -DCPU_NAME=sirius

make
