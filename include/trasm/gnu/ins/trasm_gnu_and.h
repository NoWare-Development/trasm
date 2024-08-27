#ifndef __TRASM_GNU_AND__
#define __TRASM_GNU_AND__

#define AND_RR(t, r1, r2) \
  __asm__("and" t " " r2 "," r1 "\n")

#define AND_RC(t, r, c) \
  __asm__("and" t " $" #c "," r "\n")

#define AND_RV(t, r, v) \
  __asm__("and" t " %0,%" r "\n" : : "m"(v))

#define AND_VR(t, v, r) \
  __asm__("and" t " %" r ",%0\n" : "=m"(v))

#define AND_VC(t, v, c) \
  __asm__("and" t " $" #c ",%0\n" : "=m"(v))

#define AND_VV(t, v1, v2) \
  __asm__("and" t " %1,%0\n" : "=m"(v1) : "m"(v2))

#endif // __TRASM_GNU_AND__
