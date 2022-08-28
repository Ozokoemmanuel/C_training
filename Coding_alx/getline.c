#include <stdio.h>

int main()
{
	ssize_t getline(char **lineptr, size_t *n, FILE *stream);
	
	char s;

	printf("$ ");
	scanf("%s", &s);
	
	return (0);
}
