#include <stdio.h>

int main()
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch ++;
	}
	ch = '\n';
	putchar(ch);

	return (0);
}
