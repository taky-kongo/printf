#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - a function to prints the chars
 * @args: the arguments
 *
 * Return: 1 if success or -1
 */
int print_char(va_list args)
{
	char c;
	int value;

	c = va_arg(args, int);
	value = _putchar(c);
	if (value == -1)
		return (-1);
	return (1);
}

/**
 * print_string - a function that prints a string
 * @args: the arguments
 *
 * Return: a number
 */
int print_string(va_list args)
{
	char *str;
	int count = 0;
	int value;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	while (*str)
	{
		value = _putchar(*str);
		if (value == -1)
			return (-1);
		count++;
		str++;
	}
	return (count);
}

/**
 * print_decim - prints decimal numbers, positive and negative
 * @args: the number to print
 *
 * Return: count
 */
int print_decim(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int val;
	unsigned int un;

	if (num < 0)
	{
		val = _putchar('-');
		if (val == -1)
		{
			return (-1);
		}
		count += 1;
		un = -num;
	}
	else if (num == 0)
	{
		val = _putchar('0');
		if (val == 1)
			return (1);
		else
			return (-1);
	}
	else
	{
		un = num;
	}

	val = print_number(un);
	if (val == 1)
	{
		count += countDigits(un);
	}
	else
		count = -1;

	return (count);
}
