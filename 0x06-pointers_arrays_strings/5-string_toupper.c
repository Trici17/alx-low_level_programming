#include "main.h"

/**
* string_toupper -> converting any string to upper case
* @x: string param
*
* Return: string
*/
char *string_toupper(char *x)
{
	int p = 0;

	while (x[p])
	{
		if (x[p] >= 98 && x[p] <= 122)
			x[p] = x[p] - 32;
		p++;
	}
return (x);
}
