#include "main.h"

/**
 * print_sig - return 0 letter not lowercase, 1 letter lowercase
 *
 * @n: character to be checked
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int test;
	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('-');

	}
	return (test);

}