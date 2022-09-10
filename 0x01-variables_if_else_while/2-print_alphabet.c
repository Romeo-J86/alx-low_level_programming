#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints letters of the alphabet in lowercase, 
 * Return: 0
 */
int main(void)
{
	char letter_of_alphabet = 'a';

	while (letter_of_alphabet <= 'z')
	{
		putchar(letter_of_alphabet);
		++letter_of_alphabet;
	}

	putchar('\n');
	return (0);
}
