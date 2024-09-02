#ifndef __TRASM_GNU_FLD__
#define __TRASM_GNU_FLD__

#define FLD_V(t, v) \
  __asm__("fld" t " %0\n" : : "m"(v))

#endif // __TRASM_GNU_FLD__
