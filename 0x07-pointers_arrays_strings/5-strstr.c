#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: searches a string
 * @needle: locate substring
 *
 * Return: if the subdtring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (
