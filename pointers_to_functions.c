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
/**
 * _init_params - initializes parameters of the struct params
 * @p: the struct
 * Return: the initialized struct
*/
parameters* _init_params(parameters *p)
{
	p->hash = 0;
	p->plus = 0;
	p->space = 0;
	return (p);
}

/**
 * get_flags - gets the flags for the function to work properly
 * @s: the string where after the percentage exists
 * @p: the params struct to modify
 * Return: chars_consumed
*/
int get_flag(const char *s, parameters *p)
{
	int is_space = 0, is_plus = 0, is_hash = 0;
	int chars_consumed = 0;

	while (*s && (*s != 'd' && *s != 'i' && *s != 'x' && *s != 'X' && *s != 'u'
        && *s != 's' && *s != 'S' && *s != 'o' && *s != 'b'
        && *s != 'p' && *s != '%' && *s != 'c'))
	{
		if (*s == ' ' && is_space == 0)
		{
			is_space ++;
			p->space++;
		}
		if (*s == '+' && is_plus == 0)
		{
			is_plus++;
			p->plus++;
		}
		if (*s == '#' && is_hash == 0)
		{
			is_hash++;
			p->hash++;
		}
		s++;
		chars_consumed++;
	}
	return (chars_consumed);
}