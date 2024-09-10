#ifndef __TRASM_GNU_SETBE__
#define __TRASM_GNU_SETBE__

#define SETBE_R(t, r) \
  __asm__("setbe" t " " r "\n")

#endif // __TRASM_GNU_SETBE__
