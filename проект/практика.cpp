/*������� 4. �������� �������, ������� ���������� ��� �����.*/


#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "������� �����, ������� ����� ����������� � ������ ������� " << endl;
	cin >> a;
	cout << "��������� " << fnc(a, 3);

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