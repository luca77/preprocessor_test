
#define MIN(X, Y)   ((X) < (Y)) ? (X) : (Y)

/* Main function */
int main (void)
{
	int a = 1;
	int b = 2;
	float c = 3.4;
	float d = 5.6;

	int x = MIN(a, b);
	int y = MIN(c, d);

	return x + y;
}

