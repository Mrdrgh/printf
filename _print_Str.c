#include "main.h"
/**
 * handle_S - handles S
 * @args: the variable
 * Return: the number of chars printed
*/
int handle_S(va_list args)
{
	char *stringg = va_arg(args, char *);
	int compteuur = 0, i;
	char null_stringg[] = "(null)";

	if (stringg == NULL)
	{
		for (i = 0; null_stringg[i] != '\0'; i++)
		{
			_putchar(null_stringg[i]);
			compteuur++;
		}
	return (compteuur);
	}
	for (i = 0; stringg[i] != '\0'; i++)
	{
		unsigned char c = stringg[i];

		if (c >= 32 && c <= 127)
		{
		_putchar(c);
		compteuur++;
		}
		else
		{
			_putchar('\\');
			compteuur++;
			_putchar('x');
			compteuur++;
			_putchar("0123456789ABCDEF"[c / 16]);
			compteuur++;
			_putchar("0123456789ABCDEF"[c % 16]);
			compteuur++;
		}
	}

return (compteuur);
}
