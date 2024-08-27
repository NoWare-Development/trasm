#ifndef __TRASM_MSC_DIV__
#define __TRASM_MSC_DIV__

#define _MSC_DIV(x) \
  __asm { div x }

#define DIV_R(t, r) _MSC_DIV(r)

#endif // __TRASM_MSC_DIV__
