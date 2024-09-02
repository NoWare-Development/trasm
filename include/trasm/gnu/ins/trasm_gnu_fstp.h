#ifndef __TRASM_GNU_FSTP__
#define __TRASM_GNU_FSTP__

#define FSTP_V(t, v) \
  __asm__("fstp" t " %0\n" : "=m"(v))

#endif // __TRASM_GNU_FSTP__
