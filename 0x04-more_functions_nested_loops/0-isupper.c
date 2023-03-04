#include "main.h"
/**
 * @ 0-isupper: prints caps
 * @x: the number to be checked
 * Return: 1 for upper case and 0 for others
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
