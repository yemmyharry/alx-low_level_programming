#include "holberton.h"

/**
 * print_square - Entry point
 *
 * @size: size is a variable name
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
