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
	{
		s = "(null)";
		chars_nbr = _puts(s);
		return (chars_nbr);
	}
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

/**
 * _print_int - converts print int using puts or putchar idk now
 * @i: the int
 * Return: the number of chars printed
*/

int _print_int(va_list var)
{
	int chars_nbr = 0, reverse = 0;
	int i = va_arg(var, int);

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		chars_nbr++;
	}
	while (i > 0)
	{
		reverse = reverse * 10 + i % 10;
		i = i / 10;
	}
	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
		chars_nbr++;
	}
	return (chars_nbr);
}
