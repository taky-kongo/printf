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

	c = va_args(args, int);
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
