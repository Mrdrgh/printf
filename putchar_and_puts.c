#include "main.h"
/**
 * _putchar - puts a char
 * @c: the char to put out
 * Return: the numebr of chars printd
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - puts a string
 * @s: the string
 * Return: the number of chars printed
*/
int _puts(char *s)
{
	char *p = s;
	int i = 0;

	while (*p)
	{
		_putchar(*p);
		p++;
		i++;
	}
	return (i);
}
