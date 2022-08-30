#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
	char path[] = "/tmp/";
	int stat;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (fork() == 0)
		{
			char *envp[] = {NULL};
			char *argv[] = {"/usr/bin/ls", "-l", NULL};
			printf("[%s]\n", path);

			int val = execve(argv[0], argv, envp);
			if (val == -1)
			{
				perror("execve error");
			}
			else
				wait(&stat);

		}
		sleep(3);
		
	}
	wait(&stat);
	printf("You have tried my children\n");
	
	/*child_1 = fork();
	if (child_1 == -1)
	{
		perror("problem ooo!");
	}
	
	if (child_1 == 0)
	{
		printf("child 1\n");
	
	char *envp[] = {NULL};
	char *argv[] = {"/usr/bin/ls", "-l", NULL};
	printf("[%s]\n", path);
	
	int val = execve(argv[0], argv, envp);
	
	
	if (val == -1)
		perror("execve error");
	
	}

	else
		wait(&stat);

	child_2 = fork();
	if (child_2 == 0)
	{
		printf("child 2\n");

		char *envp[] = {NULL};
		char *argv[] = {"/usr/bin/ls", "-l", NULL};
		printf("[%s]\n", path);

		int val = execve(argv[0], argv, envp);

		if (val == -1)
			perror("2nd execve error");

		if (child_2 != -1)
		{
		child_3 = fork();
		if (child_3 == 0)
		{
			printf("child 2a\n");

			char *envp[] = {NULL};
			char *argv[] = {"/usr/bin/ls", "-l", NULL};
			printf("[%s]\n", path);

			int val = execve(argv[0], argv, envp);

			if (val == -1)
				perror("2a with a problem");
		}
		}


	}
	
	else
	{
		wait(&stat);

		printf("child 3\n");
	
		char *envp[] = {NULL};
		char *argv[] = {"/usr/bin/ls", "-l", NULL};
		printf("[%s]\n", path);

		int val = execve(argv[0], argv, envp);

		if (val == -1)
			perror("2nd execve error");
	}
	
	{
		wait(&stat);
		printf("Good work my children\n");
	}*/
		

	

	return (0);
}
