#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char path[] = "/tmp/";

	char *envp[] = {NULL};
    	char *argv[] = {"/usr/bin/ls", "-l", NULL};

	if (execve(argv[0], argv, envp) == -1)
	{
						
		perror("Error:");

	}
	printf("After execve\n");
	return (0);
}
