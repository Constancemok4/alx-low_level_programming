#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory to be filled
 * @b: the choosen value
 * @n: number of bytes to be changed
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i += 1;
	}
	return (s);
}
