#ifndef __TRASM_MSC_ADD__
#define __TRASM_MSC_ADD__

#define _MSC_ADD(dst, src) \
  __asm { add dst, src }

#define ADD_RR(t, r1, r2) _MSC_ADD(r1, r2)
#define ADD_RC(t, r, c) _MSC_ADD(r, c)
#define ADD_RV(t, r, v) _MSC_ADD(r, v)
#define ADD_VR(t, v, r) _MSC_ADD(v, r)
#define ADD_VC(t, v, c) _MSC_ADD(v, c)

#endif // __TRASM_MSC_ADD__
