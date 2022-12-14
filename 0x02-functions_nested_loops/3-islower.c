#include "main.h"

/**
 * _islower - Entry point
 * _islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * @c: is th int value to be compared with the ASCII value
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
