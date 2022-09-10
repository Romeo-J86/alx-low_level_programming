#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible different combinations of two digits.
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (y > x)
			{
				putchar(48 + x);
				putchar(48 + y);
				if (x != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
