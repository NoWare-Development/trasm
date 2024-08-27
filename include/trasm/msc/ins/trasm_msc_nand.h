#ifndef __TRASM_MSC_NAND__
#define __TRASM_MSC_NAND__

#define _MSC_NAND(a, b) \
  __asm { nand a, b }

#define NAND_RR(t, r1, r2) _MSC_NAND(r1, r2)
#define NAND_RC(t, r, c) _MSC_NAND(r, c)
#define NAND_RV(t, r, v) _MSC_NAND(r, v)
#define NAND_VR(t, v, r) _MSC_NAND(v, r)
#define NAND_VC(t, v, c) _MSC_NAND(v, c)
#define NAND_VV(t, v1, v2) _MSC_NAND(v1, v2)

#endif // __TRASM_MSC_AND__
