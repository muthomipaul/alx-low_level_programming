#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * isInteger - Entry Point
 * @s: char s
 * main function
 * Return: Always
 */
int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
}
return (0);
}

/**
 * main - adds positive numbers
 * @argc: int argc
 * @argv: list argv
 * Return: always
 */

int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}

