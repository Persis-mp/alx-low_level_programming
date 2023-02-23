#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int x)
{
	if (x >= '65' && x <= '90')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
