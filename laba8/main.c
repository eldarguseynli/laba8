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