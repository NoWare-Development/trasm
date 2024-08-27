# Types

Almost every instruction needs to know its size.
To be compatible with GNU Assembler (gas) you __MUST__ provide a type.
If you are using MSC compiler, type will be ignored.

| Type          | Size in bytes | GAS Suffix |
| ------------- | ------------- | ---------- |
| `T_BYTE`      | 1             | `b`        |
| `T_WORD`      | 2             | `w`        |
| `T_LONG`      | 4             | `l`        |
| `T_DWORD`     | 4             | `l`        |
| `T_QWORD`     | 8             | `q`        |
| `T_CHAR`      | 1             | `b`        |
| `T_SHORT`     | 2             | `w`        |
| `T_INT`       | 4             | `l`        |
| `T_LONG_INT`  | 8             | `q`        |
| `T_UCHAR`     | 1             | `b`        |
| `T_USHORT`    | 2             | `w`        |
| `T_UINT`      | 4             | `l`        |
| `T_ULONG_INT` | 8             | `q`        |
| `T_I8`        | 1             | `b`        |
| `T_I16`       | 2             | `w`        |
| `T_I32`       | 4             | `l`        |
| `T_I64`       | 8             | `q`        |
| `T_U8`        | 1             | `b`        |
| `T_U16`       | 2             | `w`        |
| `T_U32`       | 4             | `l`        |
| `T_U64`       | 8             | `q`        |

Identical types:
| Size in bytes | Types                                                |
| ------------- | ---------------------------------------------------- |
| 1             | `T_BYTE` `T_CHAR` `T_UCHAR` `T_I8` `T_U8`            |
| 2             | `T_WORD` `T_SHORT` `T_USHORT` `T_I16` `T_U16`        |
| 4             | `T_DWORD` `T_LONG` `T_INT` `T_UINT` `T_I32` `T_U32`  |
| 8             | `T_QWORD` `T_LONG_INT` `T_ULONG_INT` `T_I64` `T_U64` |
