# Instructions

## How to use instructions
1. What type do you need (byte/word/dword/qword, check `TYPES.md`)
2. Get operands (register/constant/variable)
3. Pass operands

Example:
``` c
// MOV_<Op1Type><Op2Type>(<type>, <Op1>, <Op2>);

int val = 0;
MOV_RC(T_LONG, EAX, 32);
MOV_VR(T_LONG, val, EAX);

print("val = %d\n", val); // val = 32
```

* `R` - register
* `V` - variable
* `C` - constant

## Supported Instructions
__TRASM__ does not support all instructions but we are trying to implement
most of the __most-needed__ instructions.

There's all of them:

(__\*__ - supported, __\-__ - not supported)

### MOV
`MOV <DST>, <SRC>`

| DEST  | REG | CONST | VAR |
| ----- | --- | ----- | --- |
| REG   | *   | *     | *   |
| VAR   | *   | *     | *   |

### ADD
`ADD <A>, <B>`\
Result in `A`.

| DEST  | REG | CONST | VAR |
| ----- | --- | ----- | --- |
| REG   | *   | *     | *   |
| VAR   | *   | *     | -   |

### SUB
`SUB <A>, <B>`\
Result in `B`.

| DEST  | REG | CONST | VAR |
| ----- | --- | ----- | --- |
| REG   | *   | *     | *   |
| VAR   | *   | *     | -   |

### MUL
`MUL <MULTIPLIER>`

`EAX = EAX * <MULTIPLIER>`

Result in `EAX`.

| REG | CONST | VAR |
| --- | ----- | --- |
| *   | *     | *   |

### IMUL
`IMUL <A>, <B>`\
Result in `A`.

| DEST  | REG | CONST | VAR |
| ----- | --- | ----- | --- |
| REG   | *   | *     | *   |
| VAR   | -   | -     | -   |

### DIV
`DIV <DIVISOR>`

`RAX/EAX/AX` - dividend \
`REG64/REG32/REG16` - divisor

| REG | CONST | VAR |
| --- | ----- | --- |
| *   | -     | -   |

Result in `RAX/EAX/AX`.
Remainder in `RDX/EDX/DX`.

### IDIV
`IDIV <DIVISOR>`

`RAX/EAX/AX` - dividend \
`REG64/REG32/REG16` - divisor

| REG | CONST | VAR |
| --- | ----- | --- |
| *   | -     | -   |

Result in `RAX/EAX/AX`.\
Remainder in `RDX/EDX/DX`.

### FLD
`FLD <SRC>`

| REG | CONST | VAR |
| --- | ----- | --- |
| -   | -     | *   |

### FSTP
`FSTP <DST>`

| REG | CONST | VAR |
| --- | ----- | --- |
| -   | -     | *   |

### FSQRT
`FSQRT`

### FSIN
`FSIN`

### FCOS
`FCOS`

### FSINCOS
`FSINCOS`

### FABS
`FABS`

### SHR
`SHR <DST>, <SRC>`

| DEST | REG | CONST | VAR |
| ---- | --- | ----- | --- |
| REG  | *   | *     | -   |
| VAR  | -   | *     | -   |

### SHL
`SHL <DST>, <SRC>`

| DEST | REG | CONST | VAR |
| ---- | --- | ----- | --- |
| REG  | *   | *     | -   |
| VAR  | -   | *     | -   |

### AND
`AND <A>, <B>`

| DEST | REG | CONST | VAR |
| ---- | --- | ----- | --- |
| REG  | *   | *     | *   |
| VAR  | *   | *     | *   |

### OR
`OR <A>, <B>`

| DEST | REG | CONST | VAR |
| ---- | --- | ----- | --- |
| REG  | *   | *     | *   |
| VAR  | *   | *     | *   |

### NOT
`NOT <A>`

| REG | CONST | VAR |
| --- | ----- | --- |
| *   | -     | *   |

### XOR
`XOR <A>, <B>`

| DEST | REG | CONST | VAR |
| ---- | --- | ----- | --- |
| REG  | *   | *     | *   |
| VAR  | *   | *     | *   |

### CMP
`CMP <A>, <B>`

| 1ST OP | REG | CONST | VAR |
| ------ | --- | ----- | --- |
| REG    | *   | *     | *   |
| VAR    | *   | *     | -   |

### SETBE
`SETBE <A>`

| REG | VAR |
| --- | --- |
| *   | -   |

__<ins>NOTE</ins>__: accepts only 8-bit registers.

### LEA
`LEA <A>, <B>`

| DEST | REG | VAR |
| ---- | --- | --- |
| REG  | -   | *   |
| VAR  | -   | -   |

### SCAS
`SCAS<TYPE> <ADDRESS>, <NULL BYTE>`

__<ins>NOTE</ins>__: `SCAS_` instruction needs a type specified.
If you don't provide it, every compiler will throw an error.

__Valid `SCAS` instructions__: `SCASB`, `SCASW`, `SCASL`

| ADDRESS | VALID |
| ------- | ----- |
| REG     | *     |
| CONST   | -     |
| VAR     | -     |

| NULL BYTE | VALID |
| --------- | ----- |
| REG       | *     |
| CONST     | -     |
| VAR       | -     |
