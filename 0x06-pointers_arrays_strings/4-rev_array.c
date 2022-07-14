#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry Point
 * @a: number a
 * @n: number n
 * Main function for concatenating two strings
 * Return: Always
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
	}
}

