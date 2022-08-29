#include <unistd.h>
#include <stdio.h>

int main()
{
	char *argv[] = {"/root/C_training/Coding_alx/ls", "-l", NULL};
	
	int val = execve(argv[0], argv, NULL);

	if (val == -1)
	{
		perror("Error");
	}

	printf("Done with execve\n");


	return (0);
}
