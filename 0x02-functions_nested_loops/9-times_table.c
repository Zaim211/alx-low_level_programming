#include "main.h"
/**
 * times_table - Prints the 9 times table
 * starting with 0
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 */
void times_table(void)
{
	int x, y, z, u, f;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				f = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(u + '0');
				_putchar(f + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
	}
}
