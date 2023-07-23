#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/* puts and putchar*/
int _putchar(char c);
int _puts(char *str);
/* specifiers struct*/
/**
 * struct specifiers - a struct of specifiers chars and
 * their respective functions
 * @c: the char
 * @f: it's respective function
*/
typedef struct specifiers
{
	char c;
	int (*f)();
} specifiers;
/* printing functions*/
int _print_str(va_list);
int _print_char(va_list);
int _print_percent(void);
int _print_int(va_list);
int _print_binary(va_list);
int _binary_handler(unsigned int, int*);
/* pointers to functions */
int (* get_function(const char *s, specifiers * spec))();
/* function infos */
/**
 * struct functions_infos - infos of how much chars consumed by each
 * function that returns a pointer to function
 * @chars_consumed: the num of chars consumed
 * @f: the f function returned by get_function
*/
typedef struct functions_infos
{
	int chars_consumed;
	int (*f)();
} functions_info;
/*PRINTF*/
int _printf(const char *fomat, ...);
#endif
