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
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
