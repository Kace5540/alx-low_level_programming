#include "main.h"

/**
 * _isLower - checks the lower character
 *  @c: the character to be checked
 *  Return: 1 for lower character and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}