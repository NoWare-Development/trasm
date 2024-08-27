#ifndef __TRASM_GNU_XOR__
#define __TRASM_GNU_XOR__

#define XOR_RR(t, r1, r2) \
  __asm__("xor" t " " r2 "," r1 "\n")

#define XOR_RC(t, r, c) \
  __asm__("xor" t " $" #c "," r "\n")

#define XOR_RV(t, r, v) \
  __asm__("xor" t " %0,%" r "\n" : : "m"(v))

#define XOR_VR(t, v, r) \
  __asm__("xor" t " %" r ",%0\n" : "=m"(v))

#define XOR_VC(t, v, c) \
  __asm__("xor" t " $" #c ",%0\n" : "=m"(v))

#define XOR_VV(t, v1, v2) \
  __asm__("xor" t " %1,%0\n" : "=m"(v1) : "m"(v2))

#endif // __TRASM_GNU_XOR__
