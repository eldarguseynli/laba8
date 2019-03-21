#include "lab8lib.h"
#include <string.h>

int fillFileWithCharacters(char *name){
	FILE *f;
	char s[100]; s[0] = 'a'; s[1] = 'a';  s[2] = 0;//buffer 

	if ((f = fopen(name, "w+t")) == NULL) { printf("Cannot open file.\n"); exit(1); }
	puts("\nInput strings consequently. If you want to terminate filling the file, input empty string\n");
	puts("Maximum length of string is 100 symbols");
	puts("\n--------------------INPUT----------------------"); 
	getchar(); //clean buffer
	while (strlen(s) > 1) { 
		if(fgets(s, 100, stdin) == NULL) { printf("Input error\n"); system("pause"); exit(1); }; //fgets read only first 99 symbols
		//fucntion fgets inserts new line after every reading of string from terminal and after it insert terminal symbol
		//that is why there is condition (strlen(s) > 1) in loop
		fputs(s, f);
	}
	printf("------------------------------------------------");
	fclose(f);
	return 0;
}