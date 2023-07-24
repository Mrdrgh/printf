#include "main.h"
/**
 * _print_hexa_small - prints a number in hexa small
 * using hexa_handler_small
 * @var: the vars list
 * Return: the number of chars printed
*/
int _print_hexa_small(va_list var)
{
	int *tableau_de_nbrs, i, compteur = 0;
	unsigned int number = va_arg(var, unsigned int);
	unsigned int tompon = number;

	while (number / 16 != 0)
	{
		number /= 16;
		compteur++;
	}
	compteur++;
	tableau_de_nbrs = malloc(compteur * sizeof(int));

	for (i = 0; i < compteur; i++)
	{
		tableau_de_nbrs[i] = tompon % 16;
		tompon /= 16;
	}
	for (i = compteur - 1; i >= 0; i--)
	{
		if (tableau_de_nbrs[i] > 9)
			tableau_de_nbrs[i] = tableau_de_nbrs[i] + 39;
		_putchar(tableau_de_nbrs[i] + '0');
	}
	free(tableau_de_nbrs);
	return (compteur);
}
/**
 * _print_hexa_big - prints a number in hexa small
 * using hexa_handler_small
 * @var: the vars list
 * Return: the number of chars printed
*/
int _print_hexa_big(va_list var)
{
	int *tableau_de_nbrs, i, compteur = 0;
	unsigned int number = va_arg(var, unsigned int);
	unsigned int tompon = number;

	while (number / 16 != 0)
	{
		number /= 16;
		compteur++;
	}
	compteur++;
	tableau_de_nbrs = malloc(compteur * sizeof(int));

	for (i = 0; i < compteur; i++)
	{
		tableau_de_nbrs[i] = tompon % 16;
		tompon /= 16;
	}
	for (i = compteur - 1; i >= 0; i--)
	{
		if (tableau_de_nbrs[i] > 9)
			tableau_de_nbrs[i] = tableau_de_nbrs[i] + 7;
		_putchar(tableau_de_nbrs[i] + '0');
	}
	free(tableau_de_nbrs);
	return (compteur);
}
/**
 * _print_hexa_small_without_va_list - same as print_hexa_small
 * @j: the int to print
 * Return: the number of chars printed
*/
int _print_hexa_small_without_va_list(unsigned long int j)
{
	long int *tableau_de_nbrs, i, compteur = 0;
	unsigned long int number = j;
	unsigned long int tompon = number;

	while (number / 16 != 0)
	{
		number /= 16;
		compteur++;
	}
	compteur++;
	tableau_de_nbrs = malloc(compteur * sizeof(long int));

	for (i = 0; i < compteur; i++)
	{
		tableau_de_nbrs[i] = tompon % 16;
		tompon /= 16;
	}
	for (i = compteur - 1; i >= 0; i--)
	{
		if (tableau_de_nbrs[i] > 9)
			tableau_de_nbrs[i] = tableau_de_nbrs[i] + 39;
		_putchar(tableau_de_nbrs[i] + '0');
	}
	free(tableau_de_nbrs);
	return (compteur);
}
