#include "main.h"

/**
 * print_sign - function
 * Description - prints the sign of a number
 * @n : number to be checked
 * Return: 0, -1 or 1
 */

int print_sign(int n)
{
int sign;

if (n > 0)
{
	sign = 1;
	_putchar('+');
}
else if (n == 0)
{
	sign = 0;
	_putchar('0');
}
else
{
	sign = -1;
	_putchar('-');
}

return (sign);
}
