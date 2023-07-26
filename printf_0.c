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
	int i;
	int j = 0;
	int (*ptspec[128])(va_list);

	if (format == NULL)
		return (-1);

	va_start(output, format);

	ptspec[0] = NULL;
	ptspec['c'] = specC;
	ptspec['s'] = specS;
	ptspec['%'] = specp;
	ptspec['d'] = specD;
	ptspec['i'] = specI;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			++i;
			if (ptspec[(unsigned char)format[i]])
				j += ptspec[(unsigned char)format[i]](output);
			else
			{
				display('%');
				display(format[i]);
				j += 2;
			}
		}
		else
		{
			display(format[i]);
			j++;
		}
	}
	va_end(output);
	return (j);
}
