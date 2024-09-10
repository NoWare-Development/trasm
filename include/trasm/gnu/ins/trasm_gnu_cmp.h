#ifndef __TRASM_GNU_CMP__
#define __TRASM_GNU_CMP__

#define CMP_RR(t, r1, r2) \
  __asm__("cmp" t " " r2 "," r1 "\n")

#define CMP_RC(t, r, c) \
  __asm__("cmp" t " $" #c "," r "\n")

#define CMP_RV(t, r, v) \
  __asm__("cmp" t " %0,%" r "\n" : : "m"(v))

#define CMP_VR(t, v, r) \
  __asm__("cmp" t " %" r ",%0\n" : : "m"(v))

#define CMP_VC(t, v, c) \
  __asm__("cmp" t " $" #c ",%0\n" : : "m"(v))

#endif // __TRASM_GNU_CMP__
