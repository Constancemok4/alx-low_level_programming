#include "main.h"

/**
 * _abs - computes the value of an integer
 * @n: the number to be checked
 *
 * Return: returns an unsigneed int value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
