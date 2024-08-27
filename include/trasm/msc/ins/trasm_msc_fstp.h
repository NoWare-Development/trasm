#ifndef __TRASM_MSC_FSTP__
#define __TRASM_MSC_FSTP__

#define _MSC_FSTP(x) \
  __asm { fstp x }

#define FSTP_V(v) _MSC_FSTP(v)

#endif // __TRASM_MSC_FSTP__
