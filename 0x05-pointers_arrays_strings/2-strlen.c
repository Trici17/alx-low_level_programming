#include "main.h"
#include <string.h>

/**
 * _strlen - Finds the length of a string.
 * @s:String pointer to the string whose length is to be found.
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++) 
	{
		len += 1;
	}
return (len);
}
