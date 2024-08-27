#ifndef __TRASM_GNU_IMUL__
#define __TRASM_GNU_IMUL__

#define IMUL_R(t, r) \
  __asm__("imul" t " %" r "\n")

#define IMUL_C(t, c) \
  __asm__("imul" t " $" #c "\n")

#define IMUL_V(t, v) \
  __asm__("imul" t " %0\n" : : "m"(v))

#endif // __TRASM_GNU_IMUL__
