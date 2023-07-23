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
	int flagger = 0;
	int compteur = 0, is;
	int a = 1, b;
	unsigned int nomber = va_arg(var, unsigned int);
	unsigned int p;

	for (is = 0; is < 32; is++)
	{
		p = ((a << (31 - is)) & nomber);
		if (p >> (31 - is))
			flagger = 1;
		if (flagger)
		{
			b = p >> (31 - is);
			_putchar(b + 48);
			compteur++;
		}
	}
	if (compteur == 0)
	{
		compteur++;
		_putchar('0');
	}
	return (compteur);
}
