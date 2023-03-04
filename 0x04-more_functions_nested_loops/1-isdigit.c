#include "main.h"
/**
 * Description: this functions prints out a digit or a non digit
 * _isdigit: function checks
 * @c: the number to be checked
 * Return: 1 if c is a digit and 0 for others
 */

int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

