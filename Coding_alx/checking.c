#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    if (argc > 1) {
        char * word = strtok (argv[1], " ");
        char path[128] = "/bin/";
        strcat (path, word);

        char * newenvp[] = { NULL };
        char * newargv[] = { path, NULL };
        printf ("[%s]\n", path);
        int ret = execve (path, newargv, newenvp);
        if (ret == -1) {
            perror("execve error");
        }
    }
    return 0;
}
