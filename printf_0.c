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
	void (*ptspec[128])(va_list);

	if (format == NULL)
		return (-1);

	va_start(output, format);

	ptspec[256] = NULL;
	ptspec['c'] = specC;
	ptspec['s'] = specS;
	ptspec['%'] = specp;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (ptspec[(unsigned char)format[i]])
				ptspec[(unsigned char)format[i]](output);
			else
			{
				display('%');
				display(format[i]);
			}
		}
		else
			display(format[i]);
		i++;
	}
	va_end(output);
	return (i);
}
