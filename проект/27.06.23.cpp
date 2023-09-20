/*�������� � ������ MyString (��. ���������� ��) �������� ������������ ������������, ����������� ����������� � �������� ������������ ������������.
� ����� � ������ MyString ����������� ������ ���� ����������, ����������� �����������, �������� ������������ ������������, ����������� ����������� 
� �������� ������������ ������������
(������� ����).*/


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
	friend ostream& operator<<(ostream& stream, const MyString& counter);
	MyString()            //����������� �� ���������
	{
		size = 80;
		arr = new char[80];
		X++;
	}
	MyString(int S)            //����������� ������ ������������� �������
	{
		size = S;
		arr = new char[S];
		X++;
	}
	MyString(const char* s)
	{
		arr = new char[strlen(s) + 1];
		size = strlen(s) + 1;
		X++;
	}
	MyString(const MyString& other)     //����������� �����������
	{
		arr = new char[strlen(other.arr)+1];
		strcpy_s(arr,strlen(other.arr)+1, other.arr);
		size = other.size;
		X ++;
	}
	MyString operator= (const MyString& copy)             //�������� ������������ ������������
	{
		if (&copy != this)
		{
			delete arr;
			size = copy.size;
			arr = new char[size];
			for (int i = 0; i < size; i++)
			{
				arr[i] = copy.arr[i];
			}
		}
		return *this;
	}
	MyString(MyString&& moved)                           //����������� �����������
	{
		arr = moved.arr;
		size = moved.size;
		moved.arr = nullptr;
	}
	MyString& operator=(MyString&& moved)                  // ��������� ������������ � ������������
	{
		if (&moved != this)    
		{
			delete arr;        
			arr = moved.arr;  
			size = moved.size;
			moved.arr = nullptr; 
			moved.size = 0;
		}
		return *this; 
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
	void SetMystring(const char* s)
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
	~MyString()
	{
		if (arr != 0)
			delete[]arr;
	}
};
 ostream& operator<<(ostream& stream, const MyString& counter)
{
	stream << "���������:    " << endl;
	stream << counter.arr;
	return stream;
}
int MyString::X = 0;
int main()
{
	setlocale(LC_ALL, "rus");

	MyString one;                                                //������� � ������� �������� ������
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
	four.SetMystring(brr);
	four.Output();

	cout << endl << "����� ������������ �����������  " << endl;
	MyString two = one;
	two.InPut();
	two.Output();
	
	delete[] brr;
	
	return 0;
}
*/