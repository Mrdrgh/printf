#include "main.h"
/**
 * _print_hex_for_putS - prints hexadecimals but only for puts
 * @i: the number
 * Return: the number of chars printed
*/
int _print_hex_for_putS(int n)
{
	char hex_digits[] = "0123456789ABCDEF";
    	char buffer[9];  // Buffer to hold hexadecimal representation
    	int i = 7;  // Start from the end of the buffer
    	int num_chars = 0;

    	// Convert to hexadecimal
    	do {
        	buffer[i] = hex_digits[n % 16];
        	n /= 16;
        	i--;
        	num_chars++;
        } while (n != 0);

    	// Print hexadecimal
    	for (i++; i < 8; i++) {
        putchar(buffer[i]);
    	}

    	return num_chars;
}
/**
 * _putS - puts but the for S specifiers ,
 * check _print_str description for more details
 * @s: the string
 * Return: the number of chars printed
*/
int _putS(char *s)
{
	char *p = s;
	int i = 0;

	while (*p)
	{
		if ((*p > 0 && *p < 32) || *p >= 127)
		{
			_putchar('\\');
			_putchar('x');
			i++;
			i += _print_hex_for_putS(*p);
			p++;
		}
		_putchar(*p);
		p++;
		i++;
	}
	return (i);
}
/**
 * _print_Str - prints an str but when matches with
 * '\n' or '\t' it prints\xFF such that FF is the ascii
 * code of what it found, it doesn't return in line 
 * @var: the variables
 * Return: the number of chars printed
*/
int _print_Str(va_list var)
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