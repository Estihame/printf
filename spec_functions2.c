#include "main.h"

/**
  * specB - handles %b
  * @a: variadic list of arguments
  * Return: number of character printed
  */

int specB(va_list a)
{
	unsigned int n = va_arg(a, unsigned int);

	return (displayB(n));
}
