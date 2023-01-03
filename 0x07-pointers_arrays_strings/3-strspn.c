#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first segment
 * @accept: byte of check
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int cont = 0;
int a = 0;
int b;

while (*s != '\0')
{
	b = 0;
	while (*(accept + a) != '\0')
	{
		if (*s == *(accept + a))
			b = 1;
		a += 1;
	}
	a = 0;
	if (b == 0)
		break;
	cont += 1;
	s++;
}
return (cont);
}
	

