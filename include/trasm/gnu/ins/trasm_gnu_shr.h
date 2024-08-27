#ifndef __TRASM_GNU_SHR__
#define __TRASM_GNU_SHR__

#define SHR_RR(t, r1, r2) \
  __asm__("shr" t " " r2 "," r1 "\n")

#define SHR_RC(t, r, c) \
  __asm__("shr" t " $" #c "," r "\n")

#define SHR_VC(t, v, c) \
  __asm__("shr" t " $" #c ",%0\n" : "=m"(v))

#endif // __TRASM_GNU_SHR__
