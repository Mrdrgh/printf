#include "main.h"
/**
 * _octal_handler - puts to octal
 * @i: the int to put out
 * @j: the counter of chars
 * Return: the number of chars printed
*/
int _octal_handler(unsigned int i, int *j)
{
	if (i > 7)
	{
		_octal_handler(i / 8, j);
	}
	_putchar(i % 8 + '0');
	return (++(*j));
}
/**
 * _print_octal - prints an unsigned number in octal
 * using octal_handler
 * @var: the vars list
 * Return: the number of chars printed
*/
int _print_octal(va_list var)
{
	unsigned int i = va_arg(var, unsigned int);
	int chars_nbr = 0;

	_octal_handler(i, &chars_nbr);
	return (chars_nbr);
}