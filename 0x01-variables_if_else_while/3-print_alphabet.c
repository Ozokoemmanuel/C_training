#include <stdio.h>

/**
 * main - Entry
 * Return: always 0 (success)
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
			putchar(j);
	}
	putchar(i);

	putchar('\n');

	return (0);
}
