#include "lab8lib.h"

int printFileWithCharacters(char *name) {

	FILE *f;
	if ((f = fopen(name, "r+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }

	char s[100]; //buffer for numbers 

	puts("\n-----------------CONTENT-OF-FILE-----------------");
	while (fgetc(s, 99,  f))
	{
		puts(s);
		//fread(&a, sizeof(int), 1, f);
		//if (!feof(f)) { printf("%d\n", a); }
	}

	puts("-------------------------------------------------");

	fclose(f);
}