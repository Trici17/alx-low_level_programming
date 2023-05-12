#include "main.h"
#include <string.h>

/**
 * _memset -  fills memory with a constant byte.
 * @b: character
 * @s: pointed string to be filled
 * @n: number of bytes to be changed
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

for (i = 0; i < n; i++) 
	s[i] = b;
return (s);
}
