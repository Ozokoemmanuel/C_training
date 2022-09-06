#include <stdio.h>
#include "theo.h"

void funcls(char **args)
{
	char *pathname = "/bin/ls";
	pid_t child;

	if (strcmp(pathname, *args) != 0)
	{
		*args = pathname;
	}
	
	if ((child = fork()) == 0)
	{
		execve(pathname, args, environ);
	}

	wait(0);

	
}

char **getargs(char *lineptr)
{
	char **args = malloc(sizeof(char *) * 2);

	*args = strtok(lineptr, " \n\t");

	*(args + 1) = strtok(NULL, "\n\t");

	return (args);
}

void funcenv(char **args )
{
	return;
}

int main()
{
	builtin cmd[] = {
		{"/bin/ls", funcls},
		{"ls", funcls},
		{"env", funcenv},
		{NULL, NULL},
	};
	char **args, *lineptr;
	int i = 0, flag = 0;
       	size_t size = 0;

	while (1)
	{
		printf("$ ");
		getline(&lineptr, &size, stdin);

		args = getargs(lineptr);

		i = 0;

		while (cmd[i].cmd)
		{
			if (strcmp(cmd[i].cmd, lineptr) == 0)
			{
				cmd[i].func(args);
					flag = 1;
			}
			i++;
		}


		if (flag == 0)
		{
			perror("wahala\n");
		}

		else 
			flag = 0;



	}

}
