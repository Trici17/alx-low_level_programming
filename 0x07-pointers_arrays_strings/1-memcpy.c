#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: number of bytes to be copied
 * @src: source of memory
 * @dest: destination of memory to be copied to
 * Return: destination of memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

for (b = 0; b < n; b++)
	dest[b] = src[b];
return (dest);
}
