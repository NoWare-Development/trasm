#ifndef __TRASM_GNU_TYPE__
#define __TRASM_GNU_TYPE__

#define T_AUTO ""

#define T_BYTE "b"
#define T_WORD "w"
#define T_LONG "l"
#define T_DWORD T_LONG
#define T_QWORD "q"

#define T_CHAR T_BYTE
#define T_SHORT T_WORD
#define T_INT T_LONG
#define T_LONG_INT T_QWORD

#define T_UCHAR T_BYTE
#define T_USHORT T_WORD
#define T_UINT T_LONG
#define T_ULONG_INT T_QWORD

#define T_I8 T_BYTE
#define T_I16 T_WORD
#define T_I32 T_LONG
#define T_I64 T_QWORD

#define T_U8 T_BYTE
#define T_U16 T_WORD
#define T_U32 T_LONG
#define T_U64 T_QWORD

#define T_FPSINGLE "s"
#define T_FPLONG "l"

#endif // __TRASM_GNU_TYPE__
