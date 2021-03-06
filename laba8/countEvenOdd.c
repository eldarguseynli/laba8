#include "lab8lib.h"

int countEvenOdd(char *name) {

	FILE *f;

	if ((f = fopen("test.data", "a+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	int a, e = 0, o = 0; //buffer for numbers, numbers of even/odd
	while (!feof(f))
	{
		fread(&a, sizeof(int), 1, f);
		if (!feof(f)) { if (a % 2 == 0) { e++; } else { o++; } }
	}

	fwrite(&e, sizeof(int), 1, f); //write in the end of file the number of even/odd
	fwrite(&o, sizeof(int), 1, f);

	fclose(f);

	printf("\nNumber of even integers: %d\n", e);
	printf("Number of odd integers: %d\n", o);

	return 0;
}
