#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid_t Child;

	Child = fork();
	if (Child == -1)
	{
		perror("Error:");
		return (1);
	}

	pid = getpid();
	printf("My pid is %u\n", pid);
	if (Child == 0)
	{
		printf("(%u) Noooooo!\n", pid);
	}

	else
	{
	printf("(%u) %u, I am your parent\n", pid, Child);
	}

	return (0);
}
