

#include "pch.h"
#include <iostream>

using namespace std;
const int siez = 1000;

int Poridoc(int *dop, int siez)
{
	int min = dop[0];
	int nomer;
	for (int i = 0; i < siez; i++)
	{
		if (dop[i] <= min)
		{
			min = dop[i];
			nomer = i;
		}
	}
	return nomer;
}

int main()
{
	setlocale(LC_ALL, "rus");
	char str[siez] = { 0 };
	int dop[siez] = { 0 };
	char dopMass[siez] = { 0 };
	char str2[siez] = {0};
	int i (0);
	int j (0);
	int probel;
	int PoridcNomer(0);
	int PoridcNomer2(0);
	int siez2(0);
	int max(0);
	int count(0);
	int arr[siez] = { 0 };
	cout << "Введите строку\n";
	cin.getline(str,siez);
	for (int i = 0; i < siez; i++) 
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			dop[count] += str[i];
		}
		else if (str[i] == ' ')
		{
			count++;
		}
		else if (str[i] == '\0')
		{
			break;
		}
			
	}
	
	count = count + 1;
	
	for (int i = 0; i < count; i++) 
	{
		if (dop[i] > max)
		{
			max = dop[i];
		}
	}
	for (int j = 0; j < count; j++)
	{
		PoridcNomer = Poridoc(dop, count); 
		probel= 0;
		PoridcNomer2 = 0;
		for (int i = 0; i < siez; i++)
		{
			if (str[i] == ' ')
			{
				++probel;
				if (probel == PoridcNomer) 
				{
					PoridcNomer2 = i; 
				}
			}
		}
		if (PoridcNomer2 != 0)
		{
			++PoridcNomer2;
		}
		for (int i = PoridcNomer2; i < siez; i++) 
		{
			if (str[i] != ' ' && str[i] != 0) 
			{
				str2[siez2] = str[i]; 
				++siez2;
			}
			else
			{
				str2[siez2] = ' '; 
				++siez2;
				break;
			}
		}
		dop[PoridcNomer] = max + 1;
	}
		cout << str2<<endl;
	system("pause");
	return 0;
}