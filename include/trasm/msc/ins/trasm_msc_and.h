#ifndef __TRASM_MSC_AND__
#define __TRASM_MSC_AND__

#define _MSC_AND(a, b) \
  __asm { and a, b }

#define AND_RR(t, r1, r2) _MSC_AND(r1, r2)
#define AND_RC(t, r, c) _MSC_AND(r, c)
#define AND_RV(t, r, v) _MSC_AND(r, v)
#define AND_VR(t, v, r) _MSC_AND(v, r)
#define AND_VC(t, v, c) _MSC_AND(v, c)
#define AND_VV(t, v1, v2) _MSC_AND(v1, v2)

#endif // __TRASM_MSC_AND__
