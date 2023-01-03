#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that finds a character in a string
 * @s: strings to get an input
 * @c: character to get
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
