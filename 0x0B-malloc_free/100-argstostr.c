#include "main.h"
#include <stdlib.h>

/**
 *argstostr - main entry
 *@ac: int input
 *@av: double pointer array
 *Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			l++;
			n++;
		}
	}
	l = l + ac + 1;

	str = malloc(sizeof(char) *  l);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r] = '\n';
		r++;
	}
	return (str);
}
