#include "lab8lib.h"
#include <string.h>

int fillFileWithCharacters(char *name){
	FILE *f;
	char s[100]; s[0] = 'a'; s[0] = 'a'; s[2] = 0;//buffer 

	if ((f = fopen(name, "w+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	puts("\nInput strings consequently. If you want to terminate filling the file, input empty string\n");
	puts("Maximum length of string is 100 symbols");
	puts("\n--------------------INPUT----------------------"); 
	getchar(); //clean buffer
	while (fgets(s, 100, stdin)){
		//fgets read only first 99 symbols. function fgets inserts new line after every reading of string from terminal and after it insert terminal symbol
		fputs(s, f);
	}
	printf("------------------------------------------------");
	fclose(f);
	return 0;
}