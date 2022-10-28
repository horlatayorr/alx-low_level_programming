#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point of code, returns void
 *
 * Return: Always Zero(Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}

	}
	ch = '\n';

	putchar(ch);
	return (0);
}
