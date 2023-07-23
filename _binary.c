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
	int compteur = 0, i;
	int *tableau;
	unsigned int n = va_arg(var, unsigned int);
	unsigned int tomp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		compteur++;
	}
	compteur++;
	tableau = malloc(compteur * sizeof(int));
	if (tableau == NULL)
	{
		free(tableau);
		return (0);
	}
	for (i = 0; i < compteur; i++)
	{
		tableau[i] = tomp % 2;
		tomp /= 2;
	}
	for (i = compteur - 1; i >= 0; i--)
	{
		_putchar(tableau[i] + '0');
	}
	free(tableau);
	return (compteur);
}
