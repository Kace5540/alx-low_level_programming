#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str - the value
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}

