#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		printf("The digit is %i \n", digit);
		digit++;
	}

	return (0);
}
