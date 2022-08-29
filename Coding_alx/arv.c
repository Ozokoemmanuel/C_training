#include <stdio.h>

int main(__attribute__((unused))int ac, char **av)
{
	int i;

	while (*av[i] != '\0')
	{
		printf("av: %s\n", av[i]);
		

	}
	return (0);
}
