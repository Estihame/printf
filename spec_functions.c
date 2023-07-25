#include "main.h"

/**
 * specC - format specifier to display char
 * @a: variadic list of arguments
 * Return: void
 */

void specC(va_list a)
{
	display(va_arg(a, int));
}

/**
 * specS - format specifier to display strings
 * @a: variadic list of arguments
 * Return: void
 */

void specS(va_list a)
{
	int i;
	char *s = va_arg(a, char *);

	for (i = 0; s[i] != '\0'; i++)
		display(s[i]);
}

/**
 * specp - handles %%
 * @a: variadic list of arguments
 * return: void
 */

void specp(va_list a)
{
	(void)a;
	display('%');
}
