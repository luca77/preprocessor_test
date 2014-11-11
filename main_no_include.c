typedef struct foo FILE;
FILE *stdout;
FILE *stderr;

int fprintf(FILE*, char*, ...);
int fputs(char*, FILE*);
int strcmp(const char*, const char *);

int main (int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "Error! Expected %d params\n", 2);
		return 1;
	}

	if (strcmp(argv[1], "test_arg") != 0) {
		fprintf(stderr, "Error! Expected %s\n", "test_arg");
		return 2;
	}

	fputs("OK!\n", stdout);
	return 0;
}


