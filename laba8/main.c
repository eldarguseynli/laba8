#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//do not forget to exclude stdio!!!
int main() {
	
	puts("Input 'a' or 'b' , if you want to choose the task a or b");
	char choice;  scanf("%c", &choice); 

	switch (choice)
	{
	case 'a':
	{
		FILE *f;
		if ((f = fopen("test.data", "a+b")) == NULL) {printf("Cannot open file.\n"); exit(1);}
		//countEvenOdd(f);
		//printFile(f);
		//fclose(f);
	break;
	}
	case 'b':
	{
		FILE *f, *g;
		if ((f = fopen("test.txt", "r+t")) == NULL) { printf("Cannot open file.txt\n"); exit(1); }
		if ((f = fopen("result_file.txt", "w+t")) == NULL) { printf("Cannot open result_file.txt\n"); exit(1); }
		//findCharNum(f);
		//output(f);
		//output(g);
		//fclose(g);
		//fclose(f);
		break;
	}
	default:
		puts("Unvalid data was inputed. Terminating the programm.");
		system("pause");
		break;
	}

}