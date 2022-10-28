#include<stdio.h>

/**
 * main - Entry point of code, returns void
 *
 *
 * Return: Always Zero(success)
 */

int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);

		ch++;
	}
	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);

		ch++;
	}
	ch = '\n';
	putchar(ch);

	return (0);
}

