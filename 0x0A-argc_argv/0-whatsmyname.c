#include <stdio.h>
#include "main.h"

/**
 * main- print name of program
 * @argc: count argument
 * @argv: Arguments
 *
 * Return: always 0 (succes)
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}
