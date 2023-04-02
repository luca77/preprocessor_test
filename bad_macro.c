#include <stdio.h>

#define PRINT_DBG(X)                            \
	if ((X) < 3)                            \
		printf("Wrong: %d\n", (X));     \
	else                                    \
		printf("Correct: %d\n", (X));

int main(void)
{
	int i = 2;
	PRINT_DBG(i++);
	printf("Final value: %d\n", i);

	return 0;
}

