#include "main.h"
/**
 * _printf - prints a format
 * @format: the format
 * Return: the numbr of chars printed
*/

int _printf(const char *format, ...)
{
	va_list var;
	specifiers specs[] = {
		{'c', _print_char},
		{'s', _print_str},
		{'%', _print_percent},
		{'\0', NULL}
	};
	int chars_nbr = 0;
	const char *s = format;
	int (*function)();

	va_start(var, format);
	if (*s == '%' && !(s + 1))
		return (-1);
	while (s && *s)
	{
		if (*s != '%')
		{
			chars_nbr += _putchar(*s);
		}
		else
		{
			function = get_function(s + 1, specs);
			if (!function)
			{
				chars_nbr += _putchar(*s);
			}
			else
			{
				chars_nbr += function(var);
				s++;
			}
		}
		s++;
	}
	return (chars_nbr);
}
