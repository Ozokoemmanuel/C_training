#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

int main(void)
{
	char buf[] = "shell$ ";
	char *buf1 = NULL;
	size_t n = 5, r;
	DIR *directory;
	struct dirent *entry;
	int v, files = 0;
	char *argv[] = {"/usr/bin/", "-l", NULL};
	pid_t child_t; 

	while (1)
	{
		write(STDOUT_FILENO, buf, 9);
		r = getline(&buf1, &n, stdin);
		if (r == 1)
			return (0);

		directory = opendir("/usr/bin/");

		while ((entry=readdir(directory)))
		{
			//printf("%s\n", entry->d_name);
			if (strcmp(entry->d_name, buf1) == 0)
			{
		
				child_t = fork();

				wait(0);

				if (child_t == 0)
				{
				v = execve(argv[0], argv, environ);
				if (v == -1)
					printf("kk");
				}
				
			}

			files++;
		}
		
	}
	
	closedir(directory);
	free(buf1);
	return (0);
}
