#include "lab8lib.h"
#include <string.h>

int fillFileWithCharacters(char *name){
	FILE *f;
	char s[100]; s[0] = 'a'; s[0] = 'a'; s[2] = 0;//buffer 

	if ((f = fopen(name, "w+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	puts("\nInput strings consequently. If you want to terminate filling the file, input empty string\n");
	puts("Maximum length of string is 100 symbols");
	puts("\n-----------------INPUT-----------------");
	getchar(); //clean buffer
	while (strlen(s) > 1) { 
		if(fgets(s, 99, stdin) == NULL) { printf("Input error\n"); system("pause"); exit(1); }; //fgets read only first 99 symbols
		//insert new line after every reading of string from terminal and after it insert terminal symbol
		// strlen can be 0 //do not read new line  //!! In the end there will 2 '\n' //chech that does not read more than 100 symbols
		fputs(s, f);
	}
	puts("---------------------------------------");
	fclose(f);
	return 0;
}