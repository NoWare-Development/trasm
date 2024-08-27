#ifndef __TRASM_MSC_NOT__
#define __TRASM_MSC_NOT__

#define _MSC_NOT(x) \
  __asm { not x }

#define NOT_R(t, r) _MSC_NOT(r)
#define NOT_V(t, v) _MSC_NOT(v)

#endif // __TRASM_MSC_NOT__
