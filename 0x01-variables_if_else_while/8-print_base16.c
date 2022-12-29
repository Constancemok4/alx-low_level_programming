#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digits base on 10
 * starting from 0
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
