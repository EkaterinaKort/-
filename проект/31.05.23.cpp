/* 1) �������� ������ ��� ����������� ����� 3-� �������� �����. ��������, ����� ������� SUM(1, 2, 3) ������ ���������� 6.*/

/*#include <iostream>
#define Sum(a, b, c) ((a)+(b)+(c))

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "����� �����  " << Sum(1, 2, 3) << endl;

	return Sum(1, 2, 3);
}
*/

/*2) �������� ������ ��� ���������� ����� ����� �� 1 �� n. ������ ������ ��������� ���� �������� - ����� n.*/

/*#include <iostream>
#define Summa(n) ((n)*((n)+1)/2)

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	long long n;

	cout << "������� �������� n  " << endl;
	cin >> n;
	cout << Summa(n) << endl;

	return Summa(n);
}
*/


/*3) �������� ������ ��� ����������� ���������� ��������� � �������. ������ ������ ��������� ���� �������� - ��� �������.*/

/*#include <iostream>
#define arraySize(Arr) (sizeof(Arr) / sizeof((Arr)[0]))

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int Arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "������ ������� �����  " << arraySize(Arr) << "  ���������" << endl;
}
*/


/*�������������� �������:
�������� ������ ��� ������ �� ����� �������� �������� ���������� � �� ����.
������ ������ ��������� ���� �������� - ��� ����������.
��������, ����� ������� PRINT_VAR(x) ������ �������� �� ����� �������� ���������� x � �� ���.*/


/*#include <iostream>
#include <typeinfo>
#define PRINT_VAR(x) (typeid(x).name())

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	cout << "��� ����������  " << "3.1" << PRINT_VAR(3.1) << endl;
}
*/