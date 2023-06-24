#include "main.h"

/**
 * prin numbers - Print the numbers from 0 up to 9
 * Return: The number from 0 up to 9
 */
void print_number(void)
{
	int x;
	for(x = 0; x <= 9; x++)
	{
		_putchar(x + '0')
	}
	_putchar('\n')
}
