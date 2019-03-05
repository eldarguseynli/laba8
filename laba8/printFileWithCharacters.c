#include "lab8lib.h"

int printFileWithCharacters(char *name) {

	FILE *f;
	if ((f = fopen(name, "r+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }

	char s[64]; //buffer for numbers 

	puts("\n\n-----------------CONTENT-OF-FILE-----------------");
	while (!feof(f)) {
		if (fgets(s, 64, f)) printf("%s", s); //read every line in text file
	}
	printf("\n-------------------------------------------------");

	fclose(f);
}