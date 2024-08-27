#ifndef __TRASM_GNU_SUB__
#define __TRASM_GNU_SUB__

#define SUB_RR(t, r1, r2) \
  __asm__("sub" t " " r2 "," r1 "\n")

#define SUB_RC(t, r, c) \
  __asm__("sub" t " $" #c "," r "\n")

#define SUB_RV(t, r, v) \
  __asm__("sub" t " %0,%" r "\n" : : "m"(v))

#define SUB_VR(t, v, r) \
  __asm__("sub" t " %" r ",%0\n" : "=m"(v))

#define SUB_VC(t, v, c) \
  __asm__("sub" t " $" #c ",%0\n" : "=m"(v))

#endif // __TRASM_GNU_SUB__
