#include "main.h"

/**
 *print_times_table - printing n times table
 *@n: number
 *starting with 0.
 *
 * Return: 0.
 */

void print_times_table(int n)
{
	int r, l, m;

	if (n >= 0 && n <= 15)
	{
		l = 0;
		while (l <= n)
		{
			m = 0;
			_putchar('0');
			while (m <= n)
			{
				r = l * m;
				if (r < n)
				{
					_putchar(',');
					_putchar(' ');
					m++;
				}
				if (r < n)
				{
					_putchar((r / 10) + '0');
					m++;
				}
				_putchar((r % 10) + '0');
			}
			l++;
		}
		_putchar('\n');
	}
	if (n < 0 || n > 15)
	{
		;
	}
}
