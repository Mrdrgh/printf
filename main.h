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
/**
 * parameters - a struct to hold the parameteres of each func
 * @space: the space parameter
 * @hash: the hashtag parameter
 * @plus: the plus parameter
*/
typedef struct parameters
{
	unsigned int space;
	unsigned int plus;
	unsigned int hash;
} parameters;


int _print_str(va_list);
int _print_char(va_list);
int _print_percent(void);
int _print_int(va_list, parameters *);
int _print_binary(va_list);
int _binary_handler(unsigned int, int*);
int _print_octal(va_list, parameters*);
int _octal_handler(unsigned int, int*);
int _print_hexa_small(va_list, parameters*);
int _hexa_handler_small(unsigned int, int*);
int _print_hexa_big(va_list, parameters*);
int _hexa_handler_big(unsigned int, int*);
int _print_unsigned(va_list);
int _print_Str(va_list);
int _putS(char*);
int _print_hex_for_putS(int);
int handle_S(va_list);
int _print_pointer(va_list);
int _print_hexa_small_without_va_list(unsigned long int);
/* pointers to functions */


int (* get_function(const char *s, specifiers * spec))();


/*flags baby*/




parameters* _init_params(parameters *);
int get_flag(const char *, parameters *);
/*PRINTF*/
int _printf(const char *fomat, ...);
#endif
