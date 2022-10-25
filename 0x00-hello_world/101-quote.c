#include<stdio.h>

/**
 * main - Entry into code, returns void
 *
 *
 * Return: Always returns 1(Failure)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stdout, "%s", str);
	return (1);
}
