#include "holberton.h"

/**
 * print_line - Entry point
 *
 * @n: n is a variable name
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
