#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: checks character
 * Return: 1 for alphacetic 0 for other
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >=97 && c <=122))
	{
		return (1);
	}
	return (0);
}
