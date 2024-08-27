#ifndef __TRASM_MSC_MOV__
#define __TRASM_MSC_MOV__

#define _MSC_MOV(dst, src) \
  __asm { mov dst, src }

#define MOV_RR(t, r1, r2) _MSC_MOV(r1, r2)
#define MOV_RC(t, r, c) _MSC_MOV(r, c)
#define MOV_RV(t, r, v) _MSC_MOV(r, v)
#define MOV_VR(t, v, r) _MSC_MOV(v, r)
#define MOV_VC(t, v, c) _MSC_MOV(v, c)
#define MOV_VV(t, v1, v2) _MSC_MOV(v1, v2)

#endif // __TRASM_MSC_MOV__
