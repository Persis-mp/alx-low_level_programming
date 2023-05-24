#include "main.h"

/**
 * print_last_digit- prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (c >= 0)
	{
		_putchar(c + 48);
		return (c);
	}
	else if (c < 0)
	{
		c = c * -1;
		_putchar(c + 48);
		return (c);
	}
	_putchar('\n');
	return (0);
}
