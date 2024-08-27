#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main (){
	//again :
	
	system("color 7");
	printf("hello\n");
	//system("color \033[0m");
	//system("pause");
	Sleep(2000);
	system("color 1");
	system("cls");
	printf("world\n");
	system("pause");
//	if(getch() == 'm')
//		goto again;
	return 0;
}