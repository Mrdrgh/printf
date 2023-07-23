#include "main.h"
/**
 * get_function - gets a function based on the specs found in the struct
 * and if they match what he found after %
 * @va_list : the string to be checked
 * the specifiers struct to be used
 *
 * Return: a function if a match is found, NULL otherwise
 */

int ((*get_function(const char *s, specifiers * specs))
(va_list))
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
