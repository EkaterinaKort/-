/*1) �������� ����������� �����������, ��������� ������ �����������.*/

/*#include <iostream>

using namespace std;

void calc(double x, double y, double* sum, double* diff, double* mult, double* division)
{
	*sum = x + y;
	*diff = x - y;
	*mult = x * y;
	*division = x / y;
}
int main()
{
	setlocale(LC_ALL, "");
	double a=1, b=1;
	double summa, raznost, umnogenie, delenie;
	int c;
	calc(a, b, &summa, &raznost, &umnogenie, &delenie);

	do
	{
		cout << "��� ������������ ����� ����������� �����������!" << endl;
		cout << "������� ������ �����" << endl;
		cin >> a;
		cout << "������� ������ �����" << endl;
		cin >> b;
		cout << "�������� �������������� �������� ��� ����� ������� � ����� ��� ������� ��������" << endl;
		cout << "1- ��������" << endl;
		cout << "2- ���������" << endl;
		cout << "3- ���������" << endl;
		cout << "4- �������" << endl;
		cout << "0- ��� ������ �������� " << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "����� �����  " << summa << endl;
			break;
		case 2:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "�������� �����  " << raznost << endl;
			break;
		case 3:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "������������ �����  " << umnogenie << endl;
			break;
		case 4:
			if (b == 0)
			{
				cout << "�� 0 ������ ������, stupid!" << endl;
			}
			else
			{
				calc(a, b, &summa, &raznost, &umnogenie, &delenie);
				cout << "��������� �������  " << delenie << endl;
				break;
			}
		}
	} while (c== 0);
	cout << "�� �������" << endl;
}
*/

/*2) ��������� ��������� � �������� �������������, �������� ������� �������� ���� ����������.*/

/*#include <iostream>

using namespace std;

void obmen(int* a, int*b)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "�������� ���������� �� ������  " << *a <<"  " << *b << endl;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "����� ����� ���� ��������   " << *a <<"  " << *b << endl;
}
int main()
{
	int x = 100500;
	int y = 15;
	obmen(&x, &y);
}
*/

/*3) ��������� ��������� �� ������ ����� �����, �������� ������� ���������� ��������� ������� �� ���������������.
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int size)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "����������� ������" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << "  ";
	}
	cout << "\n���������� ������ " << endl;
	for (int i=0; i<size/2; i++)
	{
		temp= *(arr+i);
		*(arr+i)=*(arr+size-1-i);
		*(arr+size-1-i)=temp;
	}
}
int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	massiv(arr, 5);
	for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"  ";
	}
}
*/


/*4) ��������� ��� ��������� �� ������� ����� �����, ����������� ���� ������ � ������ ���, ����� �� ������ ������� 
�������� ���������� � �������� �������.
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/


/*#include <iostream>

using namespace std;
void massiv(int* arr, int* brr, int size)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "����������e �������" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << "  ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(brr+i) << "  ";
	}
	cout << "\n���������� ������ ������ " << endl;
	for (int i=0; i<size; i++)
	{
		temp= *(arr+i);
		*(arr + i) = *(brr+size-1-i);
		*(brr+size-1-i) = temp;
	}
}
int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	int brr[size] = { 10,20,30,40,50 };
	massiv(arr, brr, 5);
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << brr[i] << "  ";
	}
}
*/


/*5) �������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ���������� �������������, 
������������� � ������� ��������� �������.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int *polE, int *otrE, int *nulE, int size)
{
	setlocale(LC_ALL, "");
	(*polE) = 0, (*otrE) = 0, (*nulE) = 0;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "  ";
		if (*(arr + i) == 0)
			(*nulE)++;
		if (*(arr + i) < 0)
			(*otrE)++;
		if (*(arr+i)>0 && *(arr+i)!=0)
			(*polE)++;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int p=0, o=0, n=0;
	int arr[size] = { -1, 21, 3, -4, 5, 0, 657, 0, 0, -757 };
	massiv(arr, &p, &o, &n, 10);
	cout << endl;
	cout << "���������� ������������� ���������  " << p << endl;
	cout << "���������� ������������� ���������  " << o << endl;
	cout << "���������� ���������, ������ ����  " << n << endl;
}
*/



/*6) �������� �������, ������� ��������� ������ � ���������� 2 ���������� - ������ ������������� �������� � ��� ��������.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int *maxE, int *IndMax, int size)
{
	(*maxE) = arr[0], (*IndMax) = 0;
	int i;
	int temp=0, temp1=0;

	srand((int)time(0));
	for ( i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << "  ";
		if (*(arr + i) > (*maxE))
		{
			temp = *(arr + i);
			 (*maxE)=temp;
			temp1 = i;
			(*IndMax) = temp1;
		}
    }
}
int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size];
	int maxE=0, IndMax=0;
	massiv(arr, &maxE, &IndMax, 10);
	cout << endl;
	cout << "������������ ������� �������  " << maxE << endl;
	cout << "������ ������������� ��������   " << IndMax << endl;
}
*/