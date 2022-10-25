#include<stdio.h>

/**
 * write - Function, takes date type char int and unsigned int
 * main - Entry into code, returns a string or int
 *
 *
 * Return: Always returns 1(Failure)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 13);

	return (1);
}
