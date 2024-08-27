#ifndef __TRASM_GNU_MOV__
#define __TRASM_GNU_MOV__

#define MOV_RR(t, r1, r2) \
  __asm__("mov" t " %" r2 ",%" r1 "\n")

#define MOV_RC(t, r, c) \
  __asm__("mov" t " $" #c ",%" r "\n")

#define MOV_RV(t, r, v) \
  __asm__("mov" t " %0,%" r "\n" : : "m"(v))

#define MOV_VR(t, v, r) \
  __asm__("mov" t " %" r ",%0\n" : "=m"(v))

#define MOV_VC(t, v, c) \
  __asm__("mov" t " $" #c ",%0\n" : "=m"(v))

#define MOV_VV(t, v1, v2) \
  __asm__("mov" t " %1,%0\n" : "m"(v2) : "=m"(v1))

#endif // __TRASM_GNU_MOV__
