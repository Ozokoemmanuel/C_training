#include <stdioh>

/**
 * main - entry
 * Return: always 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int h;
	float f;

	printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(h));
	printf("Size of a float: %lu bytes\n", (unsigned long)sizeof(f));

	return 0;
}
