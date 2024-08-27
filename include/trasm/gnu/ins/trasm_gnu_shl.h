#ifndef __TRASM_GNU_SHL__
#define __TRASM_GNU_SHL__

#define SHL_RR(t, r1, r2) \
  __asm__("shl" t " %" r2 ",%" r1 "\n")

#define SHL_RC(t, r, c) \
  __asm__("shl" t " $" #c ",%" r "\n")

#define SHL_VC(t, v, c) \
  __asm__("shl" t " $" #c ",%0\n" : "=m"(v))

#endif // __TRASM_GNU_SHL__
