#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
