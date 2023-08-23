#include "main.h"

/**
 * print_number - we're printing some serious numbers
 * @n: that's the number, fear it
 *
 * Return: a number
 */
int  print_number(unsigned int n)
{
	int val;
	unsigned int num;

	num = n;
	if (num / 10)
		print_number(num / 10);
	
	val = _putchar('0' + num % 10);
	if (val == -1)
	{
		return (val);
	}
	return (val);
}
