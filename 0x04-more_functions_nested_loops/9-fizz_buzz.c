#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * function for printing numbers and fizz buzz
 * Return: Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		} else if ((i % 5) == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

