#include<iostream>
#include<stdlib.h> //srand
#include<windows.h>
#include<ctime>
using namespace std;

void gotoxy(int x, int y) 
{
	++x, ++y;
	COORD pos;//��ܤ@�Ӧr���b�����i�ù��W���y��
	pos.X = x;
	pos.Y = y;
}//��б���Ҳ�

void Show(int input, int board[9][9], int sudoku[9][9][2]) //30<=input<=55 
{
	time_t seed; //seed���_�l�I �Y�̤p��1
	srand(time(&seed)); //���ܤ@�}�l���üƭ� �]�w�üƺؤl
	int a = 0;
	for (int i = 0; i < 9; ++i) 
	{
		for (int j = 0; j < 9; ++j) 
		{
			gotoxy(5 + j * 4, i * 2 + 2);
			cout << " ";
			board[i][j] = 0;
		}
	}
	while (a < input) 
	{
		int m = rand() % 9, n = rand() % 9; //�Y���w�d��ݭn�Ѱ_�l�ƶ}�l��9�ӼƭȡA�]�A�_�l��
		if (sudoku[m][n][1] == 0) 
		{
			gotoxy(5 + n * 4, m * 2 + 2);
			cout << sudoku[m][n][0];
			sudoku[m][n][1] = 1;
			board[m][n] = sudoku[m][n][0];
			++a;
		}
	}
}

int main()
{
	int board[9][9], sudoku[9][9][2];
	int input = 35;
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			board[i][j];
			sudoku[i][j][1] = 0;
		}
	}
	Show(input, board, sudoku);//�H������ 

	system("pause");
	return 0;
}