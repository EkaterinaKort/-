/*1) Создайте класс «Контакт», который в дальнейшем будет использоваться в приложении "Телефонная книга".
Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон,
дополнительная информация о контакте) внутри соответствующего класса. 
Наполните класс переменными-членами, конструкторами, inline-функциями-членами, реализуйте деструктор. 
Обязательно необходимо выделять динамически память под ФИО.*/

/*#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Kontakt
{
private:
	int home;                   //отправила вызов всех сеттеров в main
	int work;
	int mobile;
	char* FIO;
	char* INFO;
	int dlinna;
	int dlinna1;
	
public:
	Kontakt()
	{
		home = 0;
		work = 0;
		mobile = 0;
		dlinna = 0;
		dlinna1 = 0;
		FIO = nullptr;
		INFO = nullptr;
	}	
	void SetFio()
	{
		if (FIO != NULL)
			delete[] FIO;
		cout << "Введите ФИО контакта" << endl;
		char* a = new char[256];
		cin>>a;
		dlinna = strlen(a) + 1;
		FIO = new char[dlinna];
		strcpy_s(FIO, dlinna, a);
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
		if (INFO != NULL)
			delete[] FIO;
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
	void Output()
	{
		cout << endl << endl;
		cout << "ФИО контакта  " << FIO << endl;
		cout << "Домашний номер телефона " << home << endl;
		cout << "Рабочий номер телефона  " << work << endl;
		cout << "Мобильный номер телефона  " << mobile << endl;
		cout << "Дополнительная информация " << INFO << endl;
	}
	~Kontakt()
	{
		if (FIO != nullptr)
			delete[] FIO;
		if (INFO != nullptr)
			delete[] INFO;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	Kontakt first;
	first.SetFio();
	first.SetHome();
	first.SetWork();
	first.SetMobile();
	first.SetInfo();
	first.Output();
	
	return 0;
}
*/



/*2) Дан текстовый файл. Необходимо создать новый файл, в который переписать из исходного файла все слова, состоящие не менее чем из семи букв.*/


/*#include <fstream>
#include <string>

using namespace std;

ifstream fin;
ofstream fout;

void writeWord(string& str) 
{
	if (str.size() >= 7) 
	{
		fout << str;
		fout << " ";
	}
}
int main() 
{
	fin.open("in.txt");
	fout.open("out.txt");

	string str;
	int ch;
	while ((ch = fin.get()) != EOF) 
	{
		if (ch != ' ') 
		{
			str += static_cast<char>(ch);
		}
		else 
		{
			writeWord(str);
			str = "";
		}
	}
	writeWord(str);
    return 0;
}
*/

/*3) Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен совпадать с порядком строк в заданном файле.*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	ifstream reading("reading.txt");
	ofstream writing("writing.txt");
	string buffer;
	if (reading.is_open()) 
	{
		while (!reading.eof()) 
		{
			getline(reading, buffer);
			writing << buffer << endl;
		}
		reading.close();
		writing.close();
	}
	else 
		cout << "Невозможно открыть файл "<<endl;
	
	return 0;
}
*/