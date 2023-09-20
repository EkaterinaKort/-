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
	static int X;

public:
	MyString()            //����������� �� ���������
	{
		size = 80;
		arr = new char[80];
		X++;
	}
	MyString(int S)            //����������� ������ ������������� �������
	{
		size = S;
		arr = new char [S];
		X++;
	}
	MyString(const char* s, int d)
	{
		arr = new char[strlen(s) + 1];
		X++;
	}
	MyString(const MyString& other)     //����������� �����������
	{
		arr = new char[strlen(other.arr) + 1];
		strcpy_s(arr, strlen(other.arr) + 1, other.arr);
		size = other.size;
		X ++;
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
	static int GetX()
	{
		return X;
	}
	MyString& operator++()
	{
		size += 1;
		return *this;
	}
	MyString& operator--()
	{
		size -= 1;
		return *this;
	}
	MyString& operator++(int O)               //
	{
		MyString copy{ *this };
		++(*this);
		return copy;
	}
	MyString& operator--(int D)
	{
		MyString copy{ *this };
		--(*this);
		return copy;
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
	three--;
	MyString Post = three;
	Post.Output();

	cout << "����� ���������, ������������ ������ " << endl;
	four++;
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


//#include <iostream>
//#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//
//
//class MyString
//{
//private:
//	char* arr;
//	int size;
//	static int X;
//
//public:
//	friend ostream& operator<<(ostream& stream, const MyString& counter);
//	MyString()            //����������� �� ���������
//	{
//		size = 80;
//		arr = new char[80];
//		X++;
//	}
//	MyString(int S)            //����������� ������ ������������� �������
//	{
//		size = S;
//		arr = new char[S];
//		X++;
//	}
//	MyString(const char* s, int d)
//	{
//		arr = new char[strlen(s) + 1];
//		size = strlen(s) + 1;
//	    X++;
//	}
//	MyString(const MyString& other)     //����������� �����������
//	{
//		arr = new char[strlen(other.arr)+1];
//		strcpy_s(arr,strlen(other.arr)+1, other.arr);
//		size = other.size;
//		X ++;
//	}
//	void SetMystring()
//	{
//		int dlina=80;
//		if (arr != NULL)
//			delete[] arr;
//		char* a = new char[256];
//		cin >> a;
//		dlina = strlen(a) + 1;
//		arr = new char[dlina];
//		strcpy_s(arr, dlina, a);
//	}
//	void SetMystring(int s)
//	{
//		int dlina;
//		if (arr != NULL)
//			delete[] arr;
//		char* a = new char[256];
//		cin >> a;
//		dlina = strlen(a) + 1;
//		arr = new char[dlina];
//		strcpy_s(arr, dlina, a);
//	}
//	void SetMystring(const char* s, int d)
//	{
//		if (arr != NULL)
//			delete[] arr;
//		arr = new char[strlen(s) + 1];
//		strcpy_s(arr, strlen(s) + 1, s);
//	}
//	MyString& operator+(int n)
//	{
//		size=size+n;
//		char* temp = new char[size];
//		for (int i = 0; i < n; i++)
//		{
//			temp[i] = 'X';
//		}
//		for (int i = n; i < size; i++)
//		{
//			temp[i] = arr[i-n];
//		}
//		
//		temp[size - 1] = '\0';
//		delete[] arr;
//		arr = temp;
//		return *this;
//	}
//	void InPut()
//	{
//		cout << "������� ������   " << endl;
//
//		SetMystring();
//	}
//	void Output()
//	{
//		cout << "���������:    " << arr << endl;
//	}
//	static int GetX()
//	{
//		return X;
//	}
//	~MyString()
//	{
//		if (arr != 0)
//			delete[]arr;
//	}
//};
// ostream& operator<<(ostream& stream, const MyString& counter)
//{
//	stream << "���������:    " << endl;
//	stream << counter.arr;
//	return stream;
//}
//int MyString::X = 0;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int n;
//	cout << "����� ���������, ������������ ������ " << endl;
//	MyString six;
//	six.InPut();
//	six.Output();
//	cout << "������� ���������� �, ������� ����� ��������� � ������ ������  " << endl;
//	cin >> n;
//	MyString five{ six + n };
//	five.Output();
//
//	cout << six << endl;
//
//
//	//MyString one;                                                //������� � ������� �������� ������
//	//one.InPut();
//	//one.Output();
//
//	//MyString three;
//	//three.InPut();
//	//three.Output();
//
//	//cout << "���������� ���������� �����:   " << MyString::GetX() << endl;
//
//	//MyString four;
//	//char* brr=new char[10];
//	//cout << "������� ����� ������  " << endl;
//	//cin >> brr;
//	//four.SetMystring(brr, 10);
//	//four.Output();
//
//	//cout << endl << "����� ������������ �����������  " << endl;
//	//MyString two = one;
//	//two.InPut();
//	//two.Output();
//	
//	//delete[] brr;
//	
//	return 0;
//}
