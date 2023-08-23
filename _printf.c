#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: the arguments to enter
 *
 * Return: a number
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*f)(va_list);
	int count = 0;
	const char *c;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			c = &format[i];
			f = get_func(c);
			if (f == NULL)
			{
				count += _putchar(format[i]);
			}
			else if (format[i] == '\0')
			{
				return (-1);
			}
			else
			{
				count += f(args);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar(format[i]);
			count++;
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
