#ifndef __TRASM_GNU_LEA__
#define __TRASM_GNU_LEA__

#define LEA_RV(t, r, v) \
  __asm__("lea" t " %0,%" r "\n" : : "m"(v))

#endif // __TRASM_GNU_LEA__
