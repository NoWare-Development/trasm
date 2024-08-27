#ifndef __TRASM_MSC_SUB__
#define __TRASM_MSC_SUB__

#define _MSC_SUB(a, b) \
  __asm { sub a, b }

#define SUB_RR(t, r1, r2) _MSC_SUB(r1, r2)
#define SUB_RC(t, r, c) _MSC_SUB(r, c)
#define SUB_RV(t, r, v) _MSC_SUB(r, v)
#define SUB_VR(t, v, r) _MSC_SUB(v, r)
#define SUB_VC(t, v, c) _MSC_SUB(v, c)

#endif // __TRASM_MSC_SUB__
