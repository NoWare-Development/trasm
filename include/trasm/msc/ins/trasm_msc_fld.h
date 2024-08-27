#ifndef __TRASM_MSC_FLD__
#define __TRASM_MSC_FLD__

#define _MSC_FLD(x) \
  __asm { fld x }

#define FLD_V(v) _MSC_FLD(v)

#endif // __TRASM_MSC_FLD__
