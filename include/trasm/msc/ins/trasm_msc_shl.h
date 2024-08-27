#ifndef __TRASM_MSC_SHL__
#define __TRASM_MSC_SHL__

#define _MSC_SHL(val, c) \
  __asm { shl val, c }

#define SHL_RR(t, r1, r2) _MSC_SHL(r1, r2)
#define SHL_RC(t, r, c) _MSC_SHL(r, c)
#define SHL_VC(t, v, c) _MSC_SHL(v, c)

#endif // __TRASM_MSC_SHL__
