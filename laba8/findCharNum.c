#include "lab8lib.h"

int findCharNum(char *name1, char *name2) {

	FILE *f1, *f2;

	if ((f1 = fopen(name1, "a+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }	
	if ((f2 = fopen(name2, "w+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	
	char s1, s2; //buffer for symbol
	fread(&s1, sizeof(char), 1, f1); //read first character

	while (!feof(f1))
	{
		fread(&s2, sizeof(char), 1, f1);
		if (!feof(f1)) {
			if (s1 >= 32 && s1 <= 126) { //check that it is symbol
				if (s2 >= '0' && s2 <= '9') { //check that it is number 
					fwrite(&s1, sizeof(char), 1, f2);
				}
			}
			s1 = s2; //save meaning in buffer for next iteration
		}
	}

	fclose(f1); fclose(f2);
	return 0;
}