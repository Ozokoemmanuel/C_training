#include <stdio.h>
#include <unistd.h>

int main()
{

	int i;

	char path[] = "/tmp/";
	char *argv[] = {"/usr/bin/", NULL};
	char *envp[] = {NULL};

	printf("[%s]\n", path);

	int val = execve(argv[0], envp);
	
	if (val == -1)
	{
		perror("wahala!\n");
	}
	printf("HEY!\n");
	

	return (0);
}
