#include "main.h"

/**
 *print_to_98 - print any number to 98
 *@n: number to start from
 *Return: return result
 */

void print_to_98(int n)
{
	upperband(n);
	lowerband(n);
	_putchar((98 / 10) + 48);
	_putchar((98 % 10) + 48);
	_putchar('\n');
}
