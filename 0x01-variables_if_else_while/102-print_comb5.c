#include <stdio.h>

/**
 * main - main function
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x = 0;
    int y = 0;

	for (; x < 100; x++)
	{
		for (; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
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
