#ifndef __TRASM_MSC_IMUL__
#define __TRASM_MSC_IMUL__

#define _MSC_IMUL(x) \
  __asm { imul x }

#define IMUL_R(t, r) _MSC_IMUL(r)
#define IMUL_C(t, c) _MSC_IMUL(c)
#define IMUL_V(t, v) _MSC_IMUL(v)

#endif // __TRASM_MSC_IMUL__
