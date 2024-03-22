#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct coversion - structure containing a string and a function pointer.
 * @string: a pointer to a character array.
 * @f: takes a variable argument list and returns an integer.
 */

typedef struct conversion
{
char *string;
int (*f)(va_list args);
} dt_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int _putchar(char c);
int print_string(va_list args);
int print_perc(va_list args);

#endif
