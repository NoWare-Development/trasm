#ifndef __TRASM_GNU_IDIV__
#define __TRASM_GNU_IDIV__

#define IDIV_R(t, r) \
  __asm__("idiv" t " " r "\n")

#endif // __TRASM_GNU_IDIV__
