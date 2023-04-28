#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int p, q, r,
if (n >= 0 && n <= 15)
{
for (p = 0; i <= n; p++)
{
for (q = 0; i <= n; q++)
{
r = q * p;
if (q == 0)
{
_putchar(r + '0');
}
else if (r < 10 && q != 0)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(r + '0');
}
else if (r >= 10 && r < 100)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((r / 10) + '0');
	_putchar((r % 10) + '0');
}
else if (r >= 100)
{
	_putchar(',');
	_putchar(' ');
	_putchar((r / 100) + '0');
	_putchar(((r / 10) % 10) + '0');
	_putchar((r % 10) + '0');
}
}
	_putchar('\n');
}
}
}
