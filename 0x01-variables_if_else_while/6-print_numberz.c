#include <stdio.h>
/**
 * main - main function
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	long c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
