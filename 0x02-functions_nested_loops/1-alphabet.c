#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 * Return: Always o (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);

	}
	putchar('\n');

}
