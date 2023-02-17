#include "main.h"
#include <unistd>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 * Return: on success 1
 * On error, -1 is returned
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
