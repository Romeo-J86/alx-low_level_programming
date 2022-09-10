#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints the lowercase alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}

	putchar('\n');
	return (0);
}
