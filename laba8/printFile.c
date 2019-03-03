#include "lab8lib.h"

int printFile(char *name) {

	FILE *f;
	if ((f = fopen(name, "r+b")) == NULL) { printf("Cannot open file.\n"); system("pause"); exit(1); }

	int a; //buffer for numbers 

	puts("\n-----------------CONTENT-OF-FILE-----------------");
	while (!feof(f))
	{
		fread(&a, sizeof(int), 1, f);
		if (!feof(f)) { printf("%d\n", a); }
	}
	puts("-------------------------------------------------");
	
	fclose(f);

	return 0;
}