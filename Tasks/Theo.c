#include <stdio.h>
#include "theo.h"

/**
  *funcls - checks for ls command and executes it
  *@args: String to be compared with desired pathname.
*/
void funcls(char **args)
{
	char *pathname = "/bin/ls";
	pid_t child;

	if (_strcmp(pathname, *args) != 0)
	{
		*args = pathname;
	}

	child = fork();
	if (child == 0)
	{
		execve(pathname, args, environ);
	}

	wait(0);
}

/**
  *getargs - Splits command into different strings
  *@lineptr: User written command.
  *Return: The first element returned by strtok.
*/
char **getargs(char *lineptr)
{
	char **args = malloc(sizeof(char *) * 2);

	*args = strtok(lineptr, " \n\t");

	*(args + 1) = strtok(NULL, "\n\t");

	return (args);
	free(args);
}

/**
  *funcenv - prints the current environment
  *@args: command whose env is to be printed.
*/
void funcenv(__attribute__((unused)) char **args)
{

}

/**
  *main - Implements a simple UNIX command line interpreter.
  *
  *Return: Always zero
 */
int main(void)
{
	builtin cmd[] = {
		{"/bin/ls", funcls},
		{"ls", funcls},
		{"env", funcenv},
		{NULL, NULL},
	};
	char **args, *lineptr, *prompt;
	int i = 0, flag = 0;
	size_t size = 0;

	prompt = "$ ";

	while (1)
	{
		write(STDOUT_FILENO, prompt, 2);
		getline(&lineptr, &size, stdin);
		args = getargs(lineptr);

		i = 0;
		while (cmd[i].cmd)
		{
			if (_strcmp(cmd[i].cmd, lineptr) == 0)
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
	return (0);
}
