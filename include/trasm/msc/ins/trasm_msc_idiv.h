#ifndef __TRASM_MSC_IDIV__
#define __TRASM_MSC_IDIV__

#define _MSC_IDIV(x) \
  __asm { idiv x }

#define IDIV_R(r) _MSC_IDIV(r)

#endif // __TRASM_MSC_IDIV__
