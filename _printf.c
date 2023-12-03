#include "main.h"
/**
 * _printf - function that produces output according to a format.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int printCh = 0;
	va_list list_of_args;
	
	if(format == NULL)
		return(-1);
	
	va_start(list_of_args, format);
	
	while(*format) /*Loop that iterates through the characters of the format string.*/
	{
		if(*format != '%') /*If format is not the % sign.*/
		{
			fwrite(int, const void, 1); /*Write the char to the stdout.*/
			printCh++;
		}
		else /*If format is the % sign.*/
		{
			format++; /*Skip '%' - Check the next character.*/
			if(*format == '\0')
				break;

			if(*format == '%') /*This solves %%*/
			{
				fwrite(int, const char, 1);
				printCh++;
			}
			else if(*format == 'c')
			{
			char c = va_arg(list_of_args, int); /*Use va_arg for char*/
			fwrite(int, char, 1);
			printCh++;
			}
			else if(*format == 's')
			{
			char *str = va_arg(list_of_args, char*);
			int str_len = 0;

			/*calculate the length of the string*/
			while(str[str_len] != '\0')
				str_len++;

			/*write the string to the stdout*/
			fwrite(int, char, str_len);
			printCh += str_len;
			}
		}
		
		format++;
	}


	va_end(list_of_args);

	return printCh;
}


