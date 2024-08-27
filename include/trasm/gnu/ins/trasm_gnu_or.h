#ifndef __TRASM_GNU_OR__
#define __TRASM_GNU_OR__

#define OR_RR(t, r1, r2) \
  __asm__("or" t " " r2 "," r1 "\n")

#define OR_RC(t, r, c) \
  __asm__("or" t " $" #c "," r "\n")

#define OR_RV(t, r, v) \
  __asm__("or" t " %0,%" r "\n" : : "m"(v))

#define OR_VR(t, v, r) \
  __asm__("or" t " %" r ",%0\n" : "=m"(v))

#define OR_VC(t, v, c) \
  __asm__("or" t " $" #c ",%0\n" : "=m"(v))

#define OR_VV(t, v1, v2) \
  __asm__("or" t " %1,%0\n" : "=m"(v1) : "m"(v2))

#endif // __TRASM_GNU_OR__
