#include "lab8lib.h"
//do not forget to exclude stdio!!!

int main() {
	
	puts("Input 'a' or 'b' , if you want to choose the task a or b");
	char choice;  scanf("%c", &choice); 

	switch (choice)
	{
	case 'a':
	{
		fillFile("test.data");
		countEvenOdd("test.data");
		printFile("test.data");
	break;
	}
	case 'b':
	{
		fillFileWithCharacters("resourse.txt");
		printFileWithCharacters("resourse.txt");
		//output(f);
		//output(g);

		break;
	}
	default:
		puts("Unvalid data was inputed. Terminating the programm.");
		system("pause");
		break;
	}

}