#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

/**
 * fork and wait
 */

int main()
{
	/*initializing the variables*/

	pid_t child;
	int status;
	
	printf("scene begins\n");

	child = fork();

	if (child == -1)
	{
		perror("Error:");

	}

	if (child == 0)
	{
		printf("wait for me papa!\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("I'm here son\n");
	}

	return(0);

}
