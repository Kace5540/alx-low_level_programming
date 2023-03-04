#include "main.h"

/**
* print_most_numbers - print numbers from 0 to 9 excluding
 * Description: prints numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (; x <= 10; x++)
	{
	if (x == 2 || x == 4)
	{
		continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
