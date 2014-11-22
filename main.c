#include <stdio.h>
#include <string.h>

#define ARGS    1
#define TEST    "test_arg"

/* Main function */
int main (int argc, char **argv)
{
        if (argc != ARGS + 1) {
                fprintf(stderr, "Error! Expected %d param\n", ARGS);
                return 1;
        }

        if (strcmp(argv[1], TEST) != 0) {
                fprintf(stderr, "Error! Expected %s\n", TEST);
                return 2;
        }

        fputs("OK!\n", stdout);
        return 0;
}
