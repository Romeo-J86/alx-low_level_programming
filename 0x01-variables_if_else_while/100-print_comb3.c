#include <stdio.h>

/**
 * main function
 * Description: prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
    int y = 1;

	for (; x <= 8; x++)
	{
		for (; y <= 9; y++)
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
