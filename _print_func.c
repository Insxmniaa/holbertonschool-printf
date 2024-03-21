#include "main.h"
 /**
 * print_char - prints character in main function
 * @args: variable that points to argument in main
 *
 * Return: 0 (success)
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return 0;
}

/**
 * print_string - prints string in main function
 * @args: variable that points to argument in main
 *
 * Return: index value to main
 */

int print_string(va_list args)
{
	int i;
	char *ptr = va_arg(args, char *);

	if (*ptr == '\0')
		ptr = "(null)";
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	return (i - 1);
}

/**
 * print_perc - prints percent in main function
 * @args: variable that points to argument in main
 * 
 * Return: 0 (success)
 */

int print_perc(__attribute__((unused))va_list args)
{
	_putchar('%');
	return 0;
}