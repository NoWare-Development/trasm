#ifndef __TRASM_GNU_MUL__
#define __TRASM_GNU_MUL__

#define MUL_R(t, r) \
  __asm__("mul" t " %" r "\n")

#define MUL_C(t, c) \
  __asm__("mul" t " $" #c "\n")

#define MUL_V(t, v) \
  __asm__("mul" t " %0\n" : : "m"(v))

#endif // __TRASM_GNU_MUL__
