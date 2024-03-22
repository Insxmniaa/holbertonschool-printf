#include "main.h"
 /**
  * print_char - Prints character in main function.
  * @args: variable that points to argument in main
  *
  * Return: 0 (success)
  */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints string in main function
 * @args: variable that points to argument in main
 *
 * Return: index value to main
 */

int print_string(va_list args)
{
	int i, count = 0;
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
		ptr = "(null)";
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
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
	return (1);
}

/**
 * print_d - function to print decimals in _pritnf
 * @args: variable that points to the argument in main
 *
 * Return: returns divisor value to main
 */

int print_d(va_list args)
{
	int num, counter = 0;
	unsigned int absolute, base;
	unsigned int divi = 1;
	num = va_arg(args, int);

	if (num < 0)
	{
		counter = counter + _putchar('-');
		absolute = num * -1;
	}
	else
		absolute = num;

	base = absolute;

	while (base > 9)
	{
		base = base / 10;
		divi = divi * 10;
	}
	while (divi > 0)
	{
		counter = counter + _putchar(((absolute / divi) % 10) + '0');
		divi = divi / 10;
	}
	return (counter);
}
