#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of code, returns void
 *
 * @n: number to be checked
 *
 *
 * Return: Zero (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is zero\n");
	}
	else  if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
