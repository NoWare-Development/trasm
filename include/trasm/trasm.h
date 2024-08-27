#ifndef __TRASM__
#define __TRASM__

#if defined(__clang__) || defined(__GNUC__)
#include "gnu/trasm_gnu.h"
#elif defined(_MSC_VER)
#include "msc/trasm_msc.h"
#else
#error "TRASM does not support your compiler. See supported compilers in `README.md`."
#endif

#endif // __TRASM__
