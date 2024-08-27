#ifndef __TRASM_MSC_OR__
#define __TRASM_MSC_OR__

#define _MSC_OR(a, b) \
  __asm { or a, b }

#define OR_RR(t, r1, r2) _MSC_OR(r1, r2)
#define OR_RC(t, r, c) _MSC_OR(r, c)
#define OR_RV(t, r, v) _MSC_OR(r, v)
#define OR_VR(t, v, r) _MSC_OR(v, r)
#define OR_VC(t, v, c) _MSC_OR(v, c)
#define OR_VV(t, v1, v2) _MSC_OR(v1, v2)

#endif // __TRASM_MSC_AND__
