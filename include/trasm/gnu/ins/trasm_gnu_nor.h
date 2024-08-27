#ifndef __TRASM_GNU_NOR__
#define __TRASM_GNU_NOR__

#define NOR_RR(t, r1, r2) \
  __asm__("nor" t " " r2 "," r1 "\n")

#define NOR_RC(t, r, c) \
  __asm__("nor" t " $" #c "," r "\n")

#define NOR_RV(t, r, v) \
  __asm__("nor" t " %0,%" r "\n" : : "m"(v))

#define NOR_VR(t, v, r) \
  __asm__("nor" t " %" r ",%0\n" : "=m"(v))

#define NOR_VC(t, v, c) \
  __asm__("nor" t " $" #c ",%0\n" : "=m"(v))

#define NOR_VV(t, v1, v2) \
  __asm__("nor" t " %1,%0\n" : "=m"(v1) : "m"(v2))

#endif // __TRASM_GNU_NOR__
