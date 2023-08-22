#ifndef __MAIN_H__
#define __MAIN_H__

#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);

#endif
