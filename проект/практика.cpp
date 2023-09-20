/*Задание 4. Написать функцию, которая возвращает куб числа.*/


#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "Введите число, которое будет возводиться в третью степень " << endl;
	cin >> a;
	cout << "Результат " << fnc(a, 3);

}

int fnc(a, 3)
{
	int res = 1;
	for (int i = 0; i < a; i++)
	{
		res *= a;
	}
	return res;
}