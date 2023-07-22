#include "main.h"
/**
 * _print_str - prints a string
 * @var: the list of vars
 * Return: the number of chars printed
*/
int _print_str(va_list var)
{
	char *s = va_arg(var, char*);
	int chars_nbr;

	if (!s)
		return (0);
	chars_nbr = _puts(s);
	return (chars_nbr);
}
/**
 * _print_char - prints a char
 * @var: the list of vars
 * Return: the number of chars printed
*/
int _print_char(va_list var)
{
	char c = va_arg(var, int);
	int chars_nbr = _putchar(c);

	return (chars_nbr);
}
/**
 * _print_percent - prints a percent
 * Return:1
*/
int _print_percent(void)
{
	_putchar ('%');
	return (1);
}
