#ifndef __TRASM_GNU_DIV__
#define __TRASM_GNU_DIV__

#define DIV_R(t, r) \
  __asm__("div" t " %" r "\n")

#endif // __TRASM_GNU_DIV__
