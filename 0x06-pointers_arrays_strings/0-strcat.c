#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: first param
 *@src: second param
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
		a++;
	for (i = 0; src[i] != 0; i++)
	{
		src[i] = dest[a];
		a += 1;
	}
	dest[a] = '\0';
return (dest);
}
