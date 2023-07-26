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
int _print_octal(va_list var, parameters *p)
{
	int i, *tableau, compt = 0;
	unsigned int nom = va_arg(var, unsigned int);
	unsigned int tomp = nom;

	if (p->hash && nom)
	{
		_putchar('0');
		_putchar('x');
	}
	while (nom / 8 != 0)
	{
		nom /= 8;
		compt++;
	}
	compt++;
	tableau = malloc(compt * sizeof(int));

	for (i = 0; i < compt; i++)
	{
		tableau[i] = tomp % 8;
		tomp /= 8;
	}
	for (i = compt - 1; i >= 0; i--)
	{
		_putchar(tableau[i] + '0');
	}
	free(tableau);
	p = _init_params(p);
	return (compt + 2);
}
