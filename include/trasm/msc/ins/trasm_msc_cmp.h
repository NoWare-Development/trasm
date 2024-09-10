#ifndef __TRASM_MSC_CMP__
#define __TRASM_MSC_CMP__

#define _MSC_CMP(a, b) __asm { cmp a, b }

#define CMP_RR(t, r1, r2) _MSC_CMP(r1, r2)
#define CMP_RC(t, r, c) _MSC_CMP(r, c)
#define CMP_RV(t, r, v) _MSC_CMP(r, v)
#define CMP_VR(t, v, r) _MSC_CMP(v, r)
#define CMP_VC(t, v, c) _MSC_CMP(v, c)

#endif // __TRASM_MSC_CMP__
