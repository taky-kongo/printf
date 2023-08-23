#include "main.h"

/**
 * get_func - function to get the format
 * @format: format to compare
 *
 * Return: pointer
 */
int (*get_func(const char *format))(va_list)
{
	list_str list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decim},
		{"i", print_decim},
		{NULL, NULL}
	};
	int i = 0;
	char **str;

	while (i < 5)
	{
		str = &list[i].ch;
		if (**str == *format)
			return (list[i].f);
		i++;
	}
	return (NULL);
}
