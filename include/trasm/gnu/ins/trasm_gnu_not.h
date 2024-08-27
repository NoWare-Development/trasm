#ifndef __TRASM_GNU_NOT__
#define __TRASM_GNU_NOT__

#define NOT_R(t, r) \
  __asm__("not" t " " r "\n")

#define NOT_V(t, v) \
  __asm__("not" t " %0\n" : "=m"(v))

#endif // __TRASM_GNU_NOT__
