#include<stdio.h>

/**
 * main - Entry into code, returns a string or int
 *
 *
 * Return: Always returns 1(Failure)
 */
int main(void)
{
	char My_str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stdout, "%s", My_str);
	return (1);
}
