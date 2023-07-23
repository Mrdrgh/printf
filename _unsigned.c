#include "main.h"
/**
 * _print_unsigned - prinsts an unsigned int
 * @var: the arg
 * Return: the number of chars printed
*/
int _print_unsigned(va_list var)
{
	unsigned int j = va_arg(var, unsigned int);
	unsigned int number, last = j % 10, numberr, expoon, i;

	j = j / 10;
	number = j;
	expoon = i = 1;
	
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expoon = expoon * 10;
			number = number / 10;
		}
		number = j;
		while (expoon > 0)
		{
			numberr = number / expoon;
			_putchar(numberr + '0');
			number = number - (numberr * expoon);
			expoon = expoon / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
