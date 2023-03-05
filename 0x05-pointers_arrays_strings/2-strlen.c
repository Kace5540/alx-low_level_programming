#include "main.h"
#include "stdio.h"
/**
 * _strlen - swaps the values of two aadresses
 * @s: the value of c
 * Return: length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
