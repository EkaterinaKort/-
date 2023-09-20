/*1) � ����� MyString �������� ���������� ����������:
++ � ����������� ����� (���������� � ����� ������ �������-������ ������ ������� 'x'),
-- � ����������� ����� (�������� ������ ������� �� ����� ������ �������-������).*/


/*#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class MyString
{
private:
	char* arr;
	int size;
	int ID;
	static int X;

public:
	MyString()            //����������� �� ���������
	{
		if (arr != NULL)
			delete[] arr;
		size = 80;
		arr = new char[80];
		X++;
		ID = X;
	}
	MyString(int S)            //����������� ������ ������������� �������
	{
		if (arr != NULL)
			delete[] arr;
		size = S;
		arr = new char [300];
		X++;
		ID = X;
	}
	MyString(const char* s, int d)
	{
		if (arr != NULL)
			delete[] arr;
		arr = new char[strlen(s) + 1];
		X++;
		ID = X;
	}
	MyString(const MyString& other)     //����������� �����������
	{
		if (arr != NULL)
			delete[] arr;
		arr = new char[strlen(other.arr) + 1];
		strcpy_s(arr, strlen(other.arr) + 1, other.arr);
		size = other.size;
		X = other.X;
		ID = other.ID;
	}
	void SetMystring()
	{
		int dlina = 80;
		if (arr != NULL)
			delete[] arr;
		char* a = new char[256];
		cin >> a;
		dlina = strlen(a) + 1;
		arr = new char[dlina];
		strcpy_s(arr, dlina, a);
	}
	void SetMystring(int s)
	{
		int dlina;
		if (arr != NULL)
			delete[] arr;
		char* a = new char[256];
		cin >> a;
		dlina = strlen(a) + 1;
		arr = new char[dlina];
		strcpy_s(arr, dlina, a);
	}
	void SetMystring(const char* s, int d)
	{
		if (arr != NULL)
			delete[] arr;
		arr = new char[strlen(s) + 1];
		strcpy_s(arr, strlen(s) + 1, s);
	}
	void InPut()
	{
		cout << "������� ������   " << endl;

		SetMystring();
	}
	
	void Output()
	{
		cout << "���������:    " << arr << endl;
	}
	int GetID()
	{
		return ID;
	}
	static int GetX()
	{
		return X;
	}
	MyString& operator++()
	{
		size+=1;
		char* temp = new char[size];
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size - 1] = size;
		delete[] arr;
		arr = temp;
		
		return *this;
	}
	MyString & operator++(int O)
	{
		size = size + 1;
		++(*this);
		arr = arr + 'X';
		return *this;
	}
	MyString& operator--()
	{
		size-=1;
		char* temp1 = new char[size];
		for (int i = 0; i < size; i++)
		{
			temp1[i] = arr[i];
			temp1[size] = 'X';
		}
		delete[] arr;
		arr = temp1;
		return *this;
	}
	MyString & operator--(int K)
	{
		size = size - 1;
		--(*this);
		return *this;
	}
	~MyString()
	{
		if (arr != 0)
			delete[]arr;
	}
};
int MyString::X = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	MyString one;
	one.InPut();
	one.Output();

	MyString three;
	three.InPut();
	three.Output();

	cout << "���������� ���������� �����:   " << MyString::GetX() << endl;

	MyString four;
	char* brr = new char[10];
	cout << "������� ����� ������  " << endl;
	cin >> brr;
	four.SetMystring(brr, 10);
	four.Output();

	cout << endl << "����� ������������ �����������  " << endl;
	MyString two = one;
	two.InPut();
	two.Output();

	cout << "����� ���������, ���������� ������ " << endl;
	--three;
	MyString Post = three;
	Post.Output();

	cout << "����� ���������, ������������ ������ " << endl;
	++four;
	MyString Post1 = four;
	Post1.Output();

	delete[] brr;
	return 0;
}
*/



/*2) � ����� MyString �������� ���������� ��������� + ��� ��������:
int+MyString (���������� � ������ ����������������� ������ ���������������� ���������� �������� 'x').
����������� ���� �������� ������ ���� ������ ������ MyString.
MyString obj;  // Hello
Mystring sum = 4+obj;  // xxxxHello

����� ����������� �������� << ��� ������ �� ����� ������� ���� Mystring.*/


/*#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class MyString
{
private:
	char* arr;
	int size;
	int ID;
	static int X;

public:
	MyString()            //����������� �� ���������
	{
		size = 80;
		arr = nullptr;
		X++;
		ID = X;
	}
	MyString(int S)            //����������� ������ ������������� �������
	{
		size = S;
		arr = nullptr;
		X++;
		ID = X;
	}
	MyString(const char* s, int d)
	{
		arr = new char[strlen(s) + 1];
		X++;
		ID = X;
	}
	MyString(const MyString& other)     //����������� �����������
	{
		arr = new char[strlen(other.arr)+1];
		strcpy_s(arr,strlen(other.arr)+1, other.arr);
		size = other.size;
		X = other.X;
		ID = other.ID;
	}
	void SetMystring()
	{
		int dlina=80;
		if (arr != NULL)
			delete[] arr;
		char* a = new char[256];
		cin >> a;
		dlina = strlen(a) + 1;
		arr = new char[dlina];
		strcpy_s(arr, dlina, a);
	}
	void SetMystring(int s)
	{
		int dlina;
		if (arr != NULL)
			delete[] arr;
		char* a = new char[256];
		cin >> a;
		dlina = strlen(a) + 1;
		arr = new char[dlina];
		strcpy_s(arr, dlina, a);
	}
	void SetMystring(const char* s, int d)
	{
		arr = new char[strlen(s) + 1];
		strcpy_s(arr, strlen(s) + 1, s);
	}
	void InPut()
	{
		cout << "������� ������   " << endl;

		SetMystring();
	}
	void Input2(const char* s)
	{

	}
	void Output()
	{
		cout << "���������:    " << arr << endl;
	}
	int GetID()
	{
		return ID;
	}
	static int GetX()
	{
		return X;
	}
	~MyString()
	{
		if (arr != 0)
			delete[]arr;
	}
};
int MyString::X = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	MyString one;
	one.InPut();
	one.Output();

	MyString three;
	three.InPut();
	three.Output();

	cout << "���������� ���������� �����:   " << MyString::GetX() << endl;

	MyString four;
	char* brr=new char[10];
	cout << "������� ����� ������  " << endl;
	cin >> brr;
	four.SetMystring(brr, 10);
	four.Output();

	cout << endl << "����� ������������ �����������  " << endl;
	MyString two = one;
	two.InPut();
	two.Output();

	delete[] brr;
	return 0;
}
*/