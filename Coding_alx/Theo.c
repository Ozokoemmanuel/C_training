#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * while loop - to make sure the shell continues to run until terminated.
 * print($) - the shell.
 * getline() - collect the list of commands in a long array
 * strtok - splits this array into arguments.
 */

int main()
{
	char *buff = NULL;
	size_t n = 0;
	char *arg;
	int *a = cmd_ls[]  = {
		{"ls", lsfun},
		{NULL, NULL}
	};

	for (int i = 0; i < 5; i++)
	{
		printf("$ ");
		getline(&buff, &n, stdin);
		arg = strtok(buff, "\n\t");
		
		while (cmd_ls[i].cmd)
		{
			if (strcmp(arg, cmd_ls[i].cmd) == 0)
			{
				cmd_ls[i].func(arg);
			}
		}
		
	}

	free(buff);
	return (0);
}
