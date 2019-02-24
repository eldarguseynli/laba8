#include "lab8lib.h"

int fillFile(char *name) {
	
	FILE *f;
	int a; //buffer

	if ((f = fopen("test.data", "w+b")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	puts("Input integer or input not integer if you want to terminate filling the file");
	puts("\n-----------------INPUT-----------------");
	while (scanf("%d", &a)) { //scanf return 1 if it read successfully number
		getchar(); //if u unput float it will recognize it as 2 numbers seperating by dot
		fwrite(&a, sizeof(int), 1, f); //IF USER INPUT  FLOAR. READ ONLY FIRST AND ROUND IT.
	}
	puts("\n---------------------------------------");
	fclose(f);
	return(0);
}