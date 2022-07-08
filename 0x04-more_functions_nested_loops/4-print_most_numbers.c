#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry Point
 * function for printing numbers 0 to 9
 * Return: Always
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i == 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

