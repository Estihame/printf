#include "main.h"

/**
 * specD - format specifier to display decimal integers
 * @a: variadic list of arguments
 * Return: void
 */

void specD(va_list a)
{
	int n = va_arg(a, int);
	int i = 0;
	int j = 0;
	int isNeg = 0;
	char buf[20];
	char *revBuf;

	if (n == 0)
	{
		display('0');
		return;
	}

	if (n < 0)
	{
		isNeg = 1;
		n = -n;
	}

	while (n != 0)
	{
		buf[i++] = '0' + (n % 10);
		n /= 10;
	}

	if (isNeg)
		buf[i++] = '-';

	buf[i] = '\0';

	revBuf = rev(buf);

	for (j = 0; revBuf[j] != '\0'; j++)
		display(revBuf[j]);

	free(revBuf);
}

/**
 * specI - format specifier to display integers
 * @a: variadic list of arguments
 * Return: void
 */

void specI(va_list a)
{
	specD(a);
}
