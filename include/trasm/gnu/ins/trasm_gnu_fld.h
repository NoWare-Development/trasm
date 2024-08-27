#ifndef __TRASM_GNU_FLD__
#define __TRASM_GNU_FLD__

#define FLD_V(v) \
  __asm__("fld %0\n" : : "m"(v))

#endif // __TRASM_GNU_FLD__
