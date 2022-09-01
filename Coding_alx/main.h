#include <stdio.h>

typdef struct chell_builtin
{
	char *cmd;
	void (*func)(char *arg);
} built_in

void lsfun(char *arg);
