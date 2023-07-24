#include "main.h"
/**
 * _print_pointer - prints the hexa decimal
 * value of a pointer
 * @var: the variable list
 * Return: the number of chars printed
*/
int _print_pointer(va_list var)
{
	void *p = va_arg(var, void*);
	int chars_nbr = 0;
	long int value;

	if (!p)
	{
		chars_nbr += _puts("(nil)");
		return (chars_nbr);
	}
	chars_nbr += _putchar('0');
	chars_nbr += _putchar('x');
	value = (unsigned long int) p;
	chars_nbr += _print_hexa_small_without_va_list((unsigned long int) value);
	return (chars_nbr + 1);
}