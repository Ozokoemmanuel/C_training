include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "This is the way.";
	char d[] = " ";
	
	char *portion =strtok(s, d);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, d);
	}


	/*

	char *portion1 = strtok(s, d);
	printf("%s\n", portion1);

	char *portion2 = strtok(NULL, d);
	printf("%s\n", portion2);

	char *portion3 = strtok(NULL, d);
	printf("%s\n", portion3);

	char *portion4 = strtok(NULL, d);
	printf("%s\n", portion4);

	char *again = strtok(NULL,d);
	if (again == NULL)
		printf("We're done!\n");
	else
		printf("Still more to go!\n");
	*/

	return (0);
}

