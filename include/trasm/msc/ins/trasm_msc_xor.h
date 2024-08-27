#ifndef __TRASM_MSC_XOR__
#define __TRASM_MSC_XOR__

#define _MSC_XOR(a, b) \
  __asm { xor a, b }

#define XOR_RR(t, r1, r2) _MSC_XOR(r1, r2)
#define XOR_RC(t, r, c) _MSC_XOR(r, c)
#define XOR_RV(t, r, v) _MSC_XOR(r, v)
#define XOR_VR(t, v, r) _MSC_XOR(v, r)
#define XOR_VC(t, v, c) _MSC_XOR(v, c)
#define XOR_VV(t, v1, v2) _MSC_XOR(v1, v2)

#endif // __TRASM_MSC_AND__
