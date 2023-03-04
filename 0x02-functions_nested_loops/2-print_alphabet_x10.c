#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet 10 times
 *
 * Description: - this function prints
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/* Description - this function prints ten times the alphabet */
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
