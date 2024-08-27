#ifndef __TRASM_GNU_ADD__
#define __TRASM_GNU_ADD__

#define ADD_RR(t, r1, r2) \
  __asm__("add" t " %" r2 ",%" r1 "\n")

#define ADD_RC(t, r, c) \
  __asm__("add" t " $" #c ",%" r "\n")

#define ADD_RV(t, r, v) \
  __asm__("add" t " %0,%" r "\n" : : "m"(v))

#define ADD_VR(t, v, r) \
  __asm__("add" t " %" r ",%0\n" : "=m"(v))

#define ADD_VC(t, v, c) \
  __asm__("add" t " $" #c ",%0\n" : "=m"(v))

#endif // __TRASM_GNU_ADD__
