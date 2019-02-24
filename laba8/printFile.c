#include "lab8lib.h"

int printFile(char *name) {

	FILE *f;
	if ((f = fopen("test.data", "r+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }

	int a; //buffer for numbers 
	while (!feof(f))
	{
		fread(&a, sizeof(int), 1, f);
		if (!feof(f)) { printf("%d\n", a); }

	}//CONCLUSION: EOF is moved but fscanf read only before last EOF. fread returns bullshit. May be it will be better to make your own test.data files.
	fclose(f);
}