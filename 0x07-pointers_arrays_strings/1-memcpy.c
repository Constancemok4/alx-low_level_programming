#include "main.h"

/**
 * _memcpy - function that copies memory location.
 * @dest: sest position
 * @src: source place
 * @n: size of byte
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (a < n)
	{
		*(dest + a) = *(src + b);
		a += 1;
		b += 1;
	}
	return (dest);
}
