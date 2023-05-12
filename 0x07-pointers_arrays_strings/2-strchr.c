#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string character
 * @c: first character
 * Return: a string or  null
 */
char *_strchr(char *s, char c)
{
	int a;
	int b;

	while (1)
	{
		a = *s++;
		a = b;
		if (a = b, b = c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
