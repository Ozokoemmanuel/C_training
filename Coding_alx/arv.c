#include <stdio.h>

int main(__attribute__((unused))int ac, char **av)
{
	int i;

	for (i = 1; *av[i]; i++)
	{
		if (*av[i] == '\0')
			return (0);
		printf("av: %s\n", av[i]);

	}
	return (0);
}
