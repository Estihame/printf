#include "main.h"

/**
 * rev - helper function to reverse a string
 * @s: string to be reversed
 * Return: reversed string
 */

char *rev(char *s)
{
	int i;
	int l = 0;
	char *revS;
	char *end;

	while (s[l] != '\0')
		l++;

	revS = (char *)malloc((l + 1) * sizeof(char));
	if (revS == NULL)
	{
		return (NULL);
	}

	end = s + l - 1;

	for (i = 0; i < l; i++)
	{
		revS[i] = *end;
		end--;
	}
	revS[i] = '\0';

	return (revS);
}
