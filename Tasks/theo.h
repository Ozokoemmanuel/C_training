

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct builtin_cmd
{
	char *cmd;
	void (*func)(char **);

} builtin;

extern char **environ;

