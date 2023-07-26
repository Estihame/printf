#include "main.h"

/**
 * specC - format specifier to display char
 * @a: variadic list of arguments
 * Return: number of characters printed, 1
 */

int specC(va_list a)
{
	display(va_arg(a, int));
	return (1);
}

/**
 * specS - format specifier to display strings
 * @a: variadic list of arguments
 * Return: number of characters printed
 */

int specS(va_list a)
{
	int i;
	char *s = va_arg(a, char *);

	for (i = 0; s[i] != '\0'; i++)
		display(s[i]);
	return (i + 1);
}

/**
 * specp - handles %%
 * @a: variadic list of arguments
 * Return: number of character printed 1
 */

int specp(va_list a)
{
	(void)a;
	display('%');
	return (1);
}
