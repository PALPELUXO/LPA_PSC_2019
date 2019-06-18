#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);

int main()
{
	gotoxy(0, 79); //padrão DOS: 24x80 
	printf("Teste\n");


	system("pause");
	return 0;
}

//Função gotoxy
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
