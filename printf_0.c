#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf -  produces output according to a format
 * @format:  character string which may contain conversion specifiers
 * Return: number of characters printed
 *
 * Description: a simpler version of the printf function that handles
 *		c, s & % conversion specifiers
 */

int _printf(const char *format, ...)
{
	va_list output;
	int i = 0;
	int k;
	char *str;

	va_start(output, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					display(va_arg(output, int));
					break;
				case 's':
					str = va_arg(output, char *);
					for (k = 0; str[k] != '\0'; k++)
						display(str[k]);
					break;
				case '%':
					display('%');
					break;
				default:
					display('%');
					display(format[i]);
					break;
			}
		}
		else
			display(format[i]);
	}
	return (i);
}
