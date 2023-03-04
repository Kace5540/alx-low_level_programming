#include "main.h"

/**
 * more_numbers - print form
 * Retunrn: 10 times the number fro 0 t0 14
 */

void more_numbers(void)
{
	int x, y;

	for (x =0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 0)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
