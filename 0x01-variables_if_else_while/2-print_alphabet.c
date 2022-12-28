#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; 1< 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
