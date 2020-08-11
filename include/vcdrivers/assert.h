#ifndef VCDRIVERS_ASSERT_H
#define VCDRIVERS_ASSERT_H

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void vcassert_failure(const char *file, unsigned line);

#define vcassert(cond) ((cond) ? (void)0 : vcassert_failure(__FILE__, __LINE__))

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_ASSERT_H */
