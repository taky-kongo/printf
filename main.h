#ifndef __MAIN_H__
#define __MAIN_H__

#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct str - Struct str
 *
 * @ch: the string
 * @f: the function associated
 */
typedef struct str
{
	char *ch;
	int (*f)(va_list);
} list_str;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int  print_number(unsigned int n);
int countDigits(unsigned int num);
int print_decim(va_list args);
int (*get_func(const char *format))(va_list);

#endif
