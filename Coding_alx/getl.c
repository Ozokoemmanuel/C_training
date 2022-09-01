#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define FILENAME "execve.c"

int main()
{
	char *buff = NULL;
	size_t n = 0;
	FILE *stream;
      	stream = "/tmp/";

	char *envp[] = {NULL}; 
	char *argv[] = {"usr/bin/ls", "-l", NULL};

	int val = execve(argv[0], argv, envp);

	if (val == -1)
		perror("error");
	getline(&buff, &n, stream);
	
	return (0);
}
