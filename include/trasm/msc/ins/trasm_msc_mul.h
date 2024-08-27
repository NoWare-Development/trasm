#ifndef __TRASM_MSC_MUL__
#define __TRASM_MSC_MUL__

#define _MSC_MUL(x) \
  __asm { mul x }

#define MUL_R(t, r) _MSC_MUL(r)
#define MUL_C(t, c) _MSC_MUL(c)
#define MUL_V(t, v) _MSC_MUL(v)

#endif // __TRASM_MSC_MUL__
