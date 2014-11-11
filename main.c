#include <stdio.h>
#include <string.h>

#define MAXARGS	2
#define TEST	"test_arg"

int main (int argc, char **argv)
{
	if (argc != MAXARGS) {
		fprintf(stderr, "Error! Expected %d params\n", MAXARGS);
		return 1;
	}

	if (strcmp(argv[1], TEST) != 0) {
		fprintf(stderr, "Error! Expected %s\n", TEST);
		return 2;
	}

	fputs("OK!\n", stdout);
	return 0;
}


