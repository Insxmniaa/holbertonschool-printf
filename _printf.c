#include "main.h"

/**
 * _printf - prints text and different types of data
 * @format: variable that holds argument to be inserted
 * 
 * Return: variable for length of the returned statement
 * 
 */

int _printf(const char* format, ...)
{
	va_list args;

	int counter = 0;
	int i = 0;
	int j = 0;
	int z = 0;

	dt_t g[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		counter++;
		if (format[i] == '%')
		{
			i++;
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			for (j = 0; j < 3; j++)
			{
				if (format[i] == g[j].string[0])
				{
					z += g[j].f(args);
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;	
	}
	va_end(args);
	return (counter + z);
}