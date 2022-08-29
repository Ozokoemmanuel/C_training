#include <stdio.h>
#include <stdlib.h>

int main()
{
	size_t b = 0;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &b, stdin);

	printf("%s", buff);
	
	free(buff);	
	return (0);
}
