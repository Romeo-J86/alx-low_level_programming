#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	int a = 0;
	char c = 'a';

	while (a <= 9)
	{
		putchar(48 + a);
		++a;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
