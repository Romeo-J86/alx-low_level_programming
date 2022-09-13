#include "main.h"

/**
 * print_alphabet - function
 * Description: prints the letters of the alphabet in lowercase followed by
 * a new line
 * Return: Nothing (void).
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
