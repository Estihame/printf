#include <unistd.h>

/**
*display- writes the character c to standard output
*@c: Character to display
*Return: On Success .
*/

int display(char c)
{
	return (write(1, &c, 1));
}
