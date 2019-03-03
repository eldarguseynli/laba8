#include "lab8lib.h"

int countEvenOdd(char *name) {

	FILE *f;

	if ((f = fopen("test.data", "a+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	int a, b; //buffers for numbers, numbers of even/odd
	while (!feof(f))
	{
		fread(&a, sizeof(int), 1, f);
		if (!feof(f)) {
		}
	}

	//fseek(f, -(int)sizeof(int), SEEK_CUR);
	//if (feof(f)) { puts("Eof have been reached"); } //
	fwrite(&e, sizeof(int), 1, f);
	fseek(f, -(int)sizeof(int), SEEK_CUR);
	fwrite(&o, sizeof(int), 1, f);

	fseek(f, -(int)sizeof(int), SEEK_CUR);
	if (feof(f)) { puts("Eof have been reached"); }

	fclose(f);

	printf("\nNumber of even integers: %d\n", e);
	printf("Number of odd integers: %d\n", o);
}