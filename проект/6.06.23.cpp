/*1) Создаём приложение "Телефонная книга".
Создайте класс «Контакт», который в дальнейшем будет использоваться в приложении "Телефонная книга".
Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон,
дополнительная информация о контакте) внутри соответствующего класса. 
Наполните класс переменными-членами, конструкторами, inline-функциями-членами, реализуйте деструктор. 
Обязательно необходимо выделять динамически память под ФИО.
Создайте динамический массив объектов типа "Контакт".
Напишите функции для вывода всех контактов на экран и добавления к этому массиву одного контакта,
функцию для удаления одного контакта из динамического массива объектов типа "Контакт" и функцию для поиска нужного контакта.
Добавьте конструктор копирования.*/


/*#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Kontakt
{
private:
	int home;                   
	int work;
	int mobile;
	char* FIO;
	char* INFO;
	
	
public:
	Kontakt()
	{
		home = 0;
		work = 0;
		mobile = 0;
		FIO = nullptr;
		INFO = nullptr;
	}	
	void SetFio()
	{
	    int dlinna;
		if (FIO != NULL)
			delete[] FIO;
		cout << "Введите ФИО контакта" << endl;
		char* a = new char[256];
		cin>>a;
		dlinna = strlen(a) + 1;
		FIO = new char[dlinna];
		strcpy_s(FIO, dlinna, a);
		delete[] a;
	}
	char* GetFio()
	{
		return FIO;
	}
	void SetHome()
	{
		cout << "Введите домашний номер телефона  " << endl;
		cin >> home;
	}
	int GetHome()
	{
		return home;
	}
	void SetWork()
	{
		cout << "Введите рабочий номер телефона  " << endl;
		cin >> work;
	}
	int GetWork()
	{
		return home;
	}
	void SetMobile()
	{
		cout << "Введите мобильный номер телефона  " << endl;
		cin >> mobile;
	}
	int GetMobile()
	{
		return mobile;
	}
	void SetInfo()
	{
	    int dlinna1;
		if (INFO != NULL)
			delete[] INFO;
		cout << "Введите дополнительную информацию о контакте  " << endl;
		char* b = new char[256];
		cin >> b;
		dlinna1 = strlen(b) + 1;
		INFO = new char[dlinna1];
		strcpy_s(INFO, dlinna1, b);
	}
	char* GetInfo()
	{
		return INFO;
	}

	void SetFio(const char* Name)
	{
	if (FIO != NULL)
			delete[] FIO;
		FIO = new char[strlen(Name) + 1];
		strcpy_s(FIO, strlen(Name) + 1, Name);
	}
	void SetHome(int Home)
	{
		home = Home;
	}
	void SetWork(int Work)
	{
		work = Work;
	}
	void SetMobile(int Mobile)
	{
		mobile = Mobile;
	}
	void SetInfo(const char* info)
	{
	if (INFO != NULL)
			delete[] INFO;
		INFO = new char[strlen(info) + 1];
		strcpy_s(INFO, strlen(info) + 1, info);
	}
	void Output()                                                   //вывод информации на экран
	{
		cout << endl << endl
		<< "ФИО контакта  " << FIO << endl
		<< "Домашний номер телефона " << home << endl
		<< "Рабочий номер телефона  " << work << endl
		<< "Мобильный номер телефона  " << mobile << endl
		<< "Дополнительная информация " << INFO << endl;
	}
	Kontakt(const Kontakt& other)                    //конструктор копирования
	{
		FIO = new char[strlen(other.FIO)+1];
		strcpy_s(FIO, strlen(other.FIO) + 1, other.FIO);
		home = other.home;
		work = other.work;
		mobile = other.mobile;
		INFO = new char[strlen(other.INFO)+1];
		strcpy_s(INFO, strlen(other.INFO) + 1, other.INFO);
	}
	bool Search()                                       //поиск контакта
	{
		
		char* kon = new char[15];
		cout << endl << "Начало поиска  " << endl << "Введите контакт  " << endl;
		cin >> kon;
		kon = strstr(FIO, kon);
		if (kon != nullptr)
			return true;
		else
			return false;
		
	}
	~Kontakt()                                          //деструктор
	{
		if (FIO != nullptr)
			delete[] FIO;
		if (INFO != nullptr)
			delete[] INFO;
	}
};
void print(Kontakt* arr, int count)
{

	for (int i = 0; i < count; i++)
		arr[i].Output();
}
void print1(Kontakt* arr, int count)
{

	for (int i = 0; i < count; i++)
	{
		arr[i].SetFio();
		arr[i].SetHome();
		arr[i].SetWork();
		arr[i].SetMobile();
		arr[i].SetInfo();
	}
}
Kontakt* Insert(Kontakt* arr, int count)        //Добавление контакта
{
	count++;
	Kontakt* temp = new Kontakt[count];
	for (int i = 0; i < count-1; i++)
	{
		temp[i].SetFio(arr[i].GetFio());
		temp[i].SetHome(arr[i].GetHome());
		temp[i].SetWork(arr[i].GetWork());
		temp[i].SetMobile(arr[i].GetMobile());
		temp[i].SetInfo(arr[i].GetInfo());
	}
	delete[]arr;
	arr = temp;
	arr[count-1].SetFio();
	arr[count-1].SetHome();
	arr[count-1].SetWork();
	arr[count-1].SetMobile();
	arr[count-1].SetInfo();
	return arr;
}
Kontakt* Delete(Kontakt* arr, int count, int count1)              //удаление контакта
{
	Kontakt* temp = new Kontakt[count-count1];
	for (int i = 0; i < count - count1; i++)
	{
		temp[i].SetFio(arr[i].GetFio());
		temp[i].SetHome(arr[i].GetHome());
		temp[i].SetWork(arr[i].GetWork());
		temp[i].SetMobile(arr[i].GetMobile());
		temp[i].SetInfo(arr[i].GetInfo());
	}
	delete[]arr;
	arr = temp;
	return arr;
}
int main()
{
	setlocale(LC_ALL, "rus");
	
	Kontakt first;
	first.SetFio();
	first.SetHome();
	first.SetWork();
	first.SetMobile();
	first.SetInfo();

	Kontakt* arr = new Kontakt[2];
	print1(arr, 2);
	print(arr, 2);

	arr = Insert(arr, 2);
	cout << endl << "Добавление контакта   " << endl << endl;
	print(arr, 3);

	arr = Delete(arr, 3, 1);
	cout << endl << "Удаление контакта  " << endl << endl;
	print(arr, 2);
	
	cout << endl << "Вызов конструктора копирования  " << endl;
	Kontakt second = first;
	second.Output();

	if (first.Search())
		cout << "Контакт найден " << endl;
	else
		cout << "Контакт не найден  " << endl;
	delete[] arr;
	return 0;
}
*/

/*2) Разработать класс MyString (аналог класса string), который в дальнейшем будет
использоваться для работы со строками. Класс должен
содержать:
• Конструктор по умолчанию, позволяющий создать
строку длиной 80 символов;
• Конструктор, позволяющий создавать строку произвольного размера (принимает количество символов, из которых будет состоять строка);
• Конструктор, который создаёт строку и инициализирует её строкой, полученной в виде параметра этого конструктора;
• Конструктор копирования.
Класс должен содержать методы для ввода строк с клавиатуры и вывода строк на экран и деструктор. Также нужно реализовать
статическую функцию-член, которая будет возвращать количество созданных объектов-строк.
Поля класса MyString:
char* - указатель на динамический массив символов;
int - размер динамического массива символов;
статическое поле.
*/



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
	MyString()            //конструктор по умолчанию
	{
		size = 80;
		arr = nullptr;
		X++;
		ID = X;
	}
	MyString(int S)            //конструктор строки произвольного размера
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
	MyString(const MyString& other)     //конструктор копирования
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
		cout << "Введите строку   " << endl;
		
		SetMystring();
	}
	void Input2(const char* s)
	{

	}
	void Output()
	{
		cout << "Результат:    " << arr << endl;
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
    
	cout << "Количество полученных строк:   " << MyString::GetX() << endl;

	MyString four;
	char* brr=new char[10];
	cout << "Введите новую строку  " << endl;
	cin >> brr;
	four.SetMystring(brr, 10);
	four.Output();

	cout << endl << "Вызов конструктора копирования  " << endl;
	MyString two = one;
	two.InPut();
	two.Output();

	delete[] brr;
	return 0;
}
*/