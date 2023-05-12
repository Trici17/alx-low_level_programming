#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string to the accepted character or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
	for (b = 0; accept[b]; b++)
	{
		if (*s == accept[b])
			return (s);
	}
	s++;
	}
return ('\0');
}
