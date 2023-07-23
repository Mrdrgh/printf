#include "main.h"
/**
 * handle_S - handles S
 * @args: the variable
 * Return: the number of chars printed
*/
int handle_S(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (str == NULL)
{
char null_str[] = "(null)";
for (int i = 0; null_str[i] != '\0'; i++)
{
_putchar(null_str[i]);
count++;
}
return (count);
}
for (int i = 0; str[i] != '\0'; i++)
{
unsigned char c = str[i];

if (c >= 32 && c <= 127)
{
_putchar(c);
count++;
}
else
{
_putchar('\\');
count++;
_putchar('x');
count++;
_putchar("0123456789ABCDEF"[c / 16]);
count++;
_putchar("0123456789ABCDEF"[c % 16]);
count++;
}
}

return (count);
}
