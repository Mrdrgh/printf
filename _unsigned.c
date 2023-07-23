#include "main.h"
/**
 * _print_unsigned - prinsts an unsigned int
 * @var: the arg
 * Return: the number of chars printed
*/
int _print_unsigned(va_list var)
{
	unsigned int j = va_arg(var, unsigned int);
	unsigned int number, last = j % 10, digit, expo, i;

	j = j / 10;
	number = j;
	expo = i = 1;
	if (last < 0)
	{
		_putchar('-');
		number = -number;
		j = -j;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expo = expo * 10;
			number = number / 10;
		}
		number = j;
		while (expo > 0)
		{
			digit = number / expo;
			_putchar(digit + '0');
			number = number - (digit * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
