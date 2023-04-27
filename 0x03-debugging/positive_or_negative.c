#include "main.h"

/**
 * Positive_negative - test function that prints if interger is positive or negative 
 * Return: 0
 **/

void positive_or_negative(int i)
{
if (i > 0)
{		
	printf("%d is positive\n", i);
}
else if (i < 0)
{
	printf("%d is negative\n", i);
}
else if (i == 0)
	printf("%d is zero\n", i);
}
