#include "main.h"

/**
 * main - check if character is lowercase
 * Description: character that checks for lower case 
 * Return: 0-if lowercase, 1-if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

