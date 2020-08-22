#ifndef VCDRIVERS_CPU_H
#define VCDRIVERS_CPU_H

#include <vcdrivers/config.h>

#include "cpu_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

void cpu_init(void);

void cpu_end_of_isr(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_CPU_H */
