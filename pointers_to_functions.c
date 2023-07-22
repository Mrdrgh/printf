#include "main.h"
/**
 * get_function - gets a function based on the specs found in the struct
 * and if they match what he found after %
 * @s: the string
 * @specs: the specifiers struct
 * Return: a function
*/
int (* get_function(const char *s, specifiers *specs))()
{
	const char *start = s;
	int i = 0;

	while (*s)
	{
		i = 0;
		while (specs[i].c)
		{
			if (specs[i].c == *s)
			{
				return (specs[i].f);
			}
			i++;
		}
		s++;
	}
	s = start;
	return (NULL);
}
