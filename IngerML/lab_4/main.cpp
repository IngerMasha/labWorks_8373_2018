#include<iostream>
using namespace std;
//int a, error, st, nam; // namber �����, error ��� �������� ������, step �������
//double cor, rez; //rez ��� ���������. cor ������
double Step(double st, double nam)
{
	double A = nam;
	if (st == 0) //���� ������� ����� 0
	{
		return 1;
	}
	else // ���� ������� �� ����� 0
	{
		if (st == 1) // ���� ������� ����� 1
		{
			return A;
		}
		else // ���� ������� �� ����� 1 �� � �� ����� 0
		{
			if (st > 0) // ���� ������� > 0
			{
				int a;
				a = A;
				while (st > 1)
				{
					A = A * a;
					st = st - 1;
				}
				return A;
			}
		}
	}
}


int Fact(int nam) //��������� ��������� ���� ��� ����� �����
{
	long int F = nam;
	for (int f = F - 1; f > 0; f--)
	{
		F = F * f;
	}
	return F;
}

float Coren (double nam) // ������� ���������� �������
{

	double x1, x, C;
	x1 = 0;
	x = nam / 2;
	C = nam;

	while (x*x < C - 0.5 || x*x > C)//(x*x > C - 1 && x*x < C + 1) //(x*x != C ) //(x*x != C- 0,9 && x*x != C + 0,9 )//(x*x > C-1 && x*x < C+1)
	{// ���������� ����� � while ��� �� ��� � ��������� ������ ��������. ������ �������� �� ������� ������ �� ���������. 
		
		x = (nam + x1) / 2;
		if (x*x > C)
		{
			nam = x;
		}
		else
		{
			x1 = x;
		}
	}
	return x;
}

int proverca(int nam)
{
	bool P = true;
	for (int i = 2; i < nam - 1; i++)
	{
		nam = (int)nam;
		if (nam%i == 0)
		{P = false;	} // ne prostoe
	}
	return P;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� �����: ";
	double nam;
	cin >> nam; //if (namber = 0) {	cout << "Error" << endl;	} error = 1;
	cout << "������� �������: ";
	int st;
	cin >> st;
	cout << nam << "^" << st << "=" << Step(st, nam) << endl;
	cout <<"��������� (������ ����� �����, ���� ����� �������):"<< Fact(nam) << endl;
	cout <<"������:" << Coren(nam) << endl;
	cout <<"�������� (0 - �� �������, 1 - �������):" << proverca(nam) << endl; 
	system("pause");
	return 0;	
}
