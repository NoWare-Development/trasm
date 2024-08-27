#ifndef __TRASM_MSC_SHR__
#define __TRASM_MSC_SHR__

#define _MSC_SHR(val, c) \
  __asm { shr val, c }

#define SHR_RR(t, r1, r2) _MSC_SHR(r1, r2)
#define SHR_RC(t, r, c) _MSC_SHR(r, c)
#define SHR_VC(t, v, c) _MSC_SHR(v, c)

#endif // __TRASM_MSC_SHR__
