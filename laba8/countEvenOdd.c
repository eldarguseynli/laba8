#include "lab8lib.h"

int countEvenOdd(char *name) {

	FILE *f;

	if ((f = fopen("test.data", "a+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	int a, e = 0, o = 0; //buffer for numbers, numbers of even/odd
	while (!feof(f))
	{
		//fscanf(f, "%1d", &a);
		fread(&a, sizeof(int), 1, f);
		if (!feof(f)) { if (a % 2 == 0) { e++; } else { o++; } }
	}

	//fseek(f, -(int)sizeof(int), SEEK_CUR);
	//if (feof(f)) { puts("Eof have been reached"); } //
	fwrite(&e, sizeof(int), 1, f); 
	fseek(f, -(int)sizeof(int), SEEK_CUR);
	fwrite(&o, sizeof(int), 1, f);

	fseek(f, -(int)sizeof(int), SEEK_CUR);
	if (feof(f)) { puts("Eof have been reached"); }

	fclose(f);
}
