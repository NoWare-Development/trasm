#ifndef __TRASM_GNU_NAND__
#define __TRASM_GNU_NAND__

#define NAND_RR(t, r1, r2) \
  __asm__("nand" t " " r2 "," r1 "\n")

#define NAND_RC(t, r, c) \
  __asm__("nand" t " $" #c "," r "\n")

#define NAND_RV(t, r, v) \
  __asm__("nand" t " %0,%" r "\n" : : "m"(v))

#define NAND_VR(t, v, r) \
  __asm__("nand" t " %" r ",%0\n" : "=m"(v))

#define NAND_VC(t, v, c) \
  __asm__("nand" t " $" #c ",%0\n" : "=m"(v))

#define NAND_VV(t, v1, v2) \
  __asm__("nand" t " %1,%0\n" : "=m"(v1) : "m"(v2))

#endif // __TRASM_GNU_NAND__
