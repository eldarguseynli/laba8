#include "lab8lib.h"

int fillFile(char *name) {
	
	FILE *f;
	int a; //buffer

	if ((f = fopen(name, "w+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	puts("\nInput integer or input not integer if you want to terminate filling the file.\nIf you input unvalid symbols it will read only symbols before this unvalid.");
	puts("\n-----------------INPUT-----------------");
	while (scanf("%d", &a)) { 
		fwrite(&a, sizeof(int), 1, f); 
	}
	puts("\n---------------------------------------");
	fclose(f);
	return(0);
}