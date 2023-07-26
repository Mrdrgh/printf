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
 * @var: the int
 * Return: the number of chars printed
*/
int _print_int(va_list var, parameters *p)
{
	int j = va_arg(var, int);
	int number, last = j % 10, digit, expo = 1, i = 1;

	if (p->space)
		i += _putchar(' ');
	if (j >= 0 && p->plus) 
		i += _putchar('+');
	j = j / 10;
	number = j;

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
	p = _init_params(p);
	return (i);
}

