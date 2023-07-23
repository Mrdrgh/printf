#include "main.h"
/**
 * _binary_handler - prints an unsigned int to binary
 * @i: the int to print
 * @j: the char counter
 * Return: the number of chars printed
*/
int _binary_handler(unsigned int i, int *j)
{
	if (i > 1)
	{
		_binary_handler(i / 2, j);
	}
	_putchar((i % 2) + '0');
	return (++(*j));
}
/**
 * _print_binary - prints an unsigned int in binary
 * using binary_handler
 * @var: the int
 * Return: the number of chars printed
*/
int _print_binary(va_list var)
{
	unsigned  i = va_arg(var, unsigned int);
	int chars_nbr = 0;

	_binary_handler(i, &chars_nbr);
	return(chars_nbr);
}
