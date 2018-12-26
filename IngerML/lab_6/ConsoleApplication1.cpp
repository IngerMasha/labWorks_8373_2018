
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "cstdlib" 

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, {x, y});
}

void Trez_First() 
{
	GotoXY(0, 10);
	printf("       \n");
	printf("       \n");
	printf("       31513\n");
	printf("1  1  1 \n");
	printf("1  1  1 \n");
	printf("1  1  1 \n");
	printf("      3 \n");
	printf("      1 \n");
	
}
void Bashn_Two()
{
	GotoXY(0, 10);
	printf("         \n");
	printf("         3 \n");
	printf("       24142 \n");
	printf("1  1  1 \n");
	printf("      5 \n");
	printf("      3 \n");
	printf("   1  1 \n");
	printf("      3 \n");
}
void Cherep_Thre()
{
	GotoXY(0, 10);
	printf("        \n");
	printf("        2 2 \n");
	printf("       32423 \n");
	printf("      3 \n");
	printf("      5 \n");
	printf("1  1  1 \n");
	printf("      5 \n");
	printf("   1  1 \n");
}
void WakeUp_4()
{
	GotoXY(0, 10);
	printf("         1    1 \n");
	printf("        26541 62 \n");
	printf("       2413349142 \n");
	printf("   2  2         |\n");
	printf("2  4  2 \n");
	printf("1 3 2 1 \n");
	printf("   4  3 \n");
	printf("   4  3 \n");
	printf("   3  4 \n");
	printf("   2  5 \n");
	printf("      6 \n");
	printf("      4 \n");
	printf("   2  2 \n");
}

bool Proverca(int x1, int y1) 
{ 
		if ((x1 >= 7 ) && (y1 >= 13 ))
		{
		return true;
		}
		else return false;
}

void vibor()
{
	int N;
	cout << "Выбирете кроссворд: трезубец - 1 (5х5), башня - 2 (5х5), череп - 3 (5х5),\n череп - 4 (10х10) \n";
	cin >> N;
	if (N == 1)
	{
		Trez_First();
	}
	if (N == 2)
	{
		Bashn_Two();
	}
	if (N == 3)
	{
		Cherep_Thre();
	}
	if (N == 4)
	{
		WakeUp_4();
	}
}

int main()
{	
	setlocale(0, "rus");
	char D = _getwch(); 
	int stop = 1;
	int N(0);	
	int x1 = 10;
	int y1 = 14;
	cout << "Правила игры:"<<endl;
	cout << "Набор чисел 4, 1, и 3 в сетке японского кроссворда означает, ";
	cout << "что в этом ряду\nесть три группы:первая — из четырех," ;
	cout << " вторая — из одной, третья — из трех клеток." ;
	cout << "Группы разделены как минимум одной пустой клеткой.Пустые клетки могут быть и по краям рядов.";
	cout << "Управление с помощью стрелок, чтобы напечтать символ нажмите пробел,чтобы стереть его - Backspase\n";
	cout << "Чтобы выйти нажмите Esc \n";
	do
	{
		vibor();
		D = 0;
		while ((D = _getwch()))
		{

			switch (D)
			{
			case 72: 
				y1--;
				if (Proverca(x1, y1) == true)
				{
					GotoXY(x1, y1);
				}
				break;
				y1--;
			case 80: 
				y1++;
				if (Proverca(x1, y1) == true)
				{
					GotoXY(x1, y1);
				}
				break;
				y1++;
			case 75: 
				x1--;
				if (Proverca(x1, y1) == true)
				{
					GotoXY(x1, y1);
				}
				break;
				x1--;
			case 77: 
				x1++;
				if (Proverca(x1, y1) == true)
				{
					GotoXY(x1, y1);
				}
				break;
				x1++;
			case 32:
				cout << "*";
				break;
			case 8:
				cout << " ";
				break;
			case 13:
				GotoXY(20, 20);
				cout << x1 << " " << y1;
				GotoXY(x1, y1);
				break;
			case 27:
				GotoXY(18, 16); 
				printf("Хотите прекратить работу программы? \n \t \t  Введите 0 если да и 1 если нет.   ");
				cin >> stop;
				system("cls");
				vibor();
				break;
			}
		}
		
	} while (stop != 0);
	
	system ("pause");
	return 0;
}
