#include <stdio.h>
/**
 * main - main block
 * description: get a random and check it
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'a' && c != 'z')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
