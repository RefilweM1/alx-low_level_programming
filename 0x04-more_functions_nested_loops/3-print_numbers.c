#include "main.h"
#include <stdio.h>

/**
 * prin numbers - Print the numbers from 0 up to 9
 * Return: The number from 0 up to 9
 */

void print_numbers(void)
{
int x;
for(x = 0; x <= 9; x++)
{
putchar(x + '0');
}
putchar('\n');
}
