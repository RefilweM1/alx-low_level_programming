#include "main.h"
/**
 * _islower - Shows 1 if the input is a 
 * lowercase character. Another cases, shows 
 * 0
 * @c: The characters in ACII code 
 * Return: 1for the lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
