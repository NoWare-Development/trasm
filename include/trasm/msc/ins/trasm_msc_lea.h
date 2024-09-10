#ifndef __TRASM_MSC_LEA__
#define __TRASM_MSC_LEA__

#define _MSC_LEA(a, b) __asm { lea a, b }

#define LEA_RV(t, r, v) _MSC_LEA(r, v)

#endif // __TRASM_MSC_LEA__
