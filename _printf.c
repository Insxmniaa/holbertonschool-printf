#include "main.h"
/**
 * _printf - prints text and different types of data.
 * @format: variable that holds argument to be inserted.
 * Return: variable for length of the returned statement.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	int i = 0;
	int j = 0;

	dt_t g[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL},
	};

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			for (j = 0; g[j].f != NULL; j++)
			{
				if (format[i] == g[j].string[0])
				{
					counter += g[j].f(args);
					break;
				}
			}
			if (g[j].f == NULL)
			{
				_putchar(format[i - 1]);
				counter++;
				_putchar(format[i]);
				counter++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
