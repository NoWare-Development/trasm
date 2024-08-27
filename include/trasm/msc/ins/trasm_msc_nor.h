#ifndef __TRASM_MSC_NOR__
#define __TRASM_MSC_NOR__

#define _MSC_NOR(a, b) \
  __asm { nor a, b }

#define NOR_RR(t, r1, r2) _MSC_NOR(r1, r2)
#define NOR_RC(t, r, c) _MSC_NOR(r, c)
#define NOR_RV(t, r, v) _MSC_NOR(r, v)
#define NOR_VR(t, v, r) _MSC_NOR(v, r)
#define NOR_VC(t, v, c) _MSC_NOR(v, c)
#define NOR_VV(t, v1, v2) _MSC_NOR(v1, v2)

#endif // __TRASM_MSC_AND__
