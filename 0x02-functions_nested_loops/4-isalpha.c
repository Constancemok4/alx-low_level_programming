#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: character to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 65  && c <= 122)
		return (1);
	else
		return (0);
}
