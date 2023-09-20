/*1) Дана строка символов. Пользователь вводит искомый символ. Посчитать, сколько раз он встречается в строке.*/
/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	char stroka[] = "smoke on the water a fire in the sky, smoke on the water";
	int size = strlen(stroka);
	char simbol;
	int sum = 0;

	cout << "Ниже приведена строчка из песни Deep purple 'Smoke on the water'  " << endl<<endl;
	cout << stroka << endl << endl;
	cout << "Введите, какой символ будем считать?" << endl;
	cin >> simbol;
	
	for (int i = 0; i < size; i++)
	{
		if (stroka[i] == simbol)
		{
			sum++;
		}
	}
	cout << endl;
	cout << "Количество искомого символа равно   " << sum << endl;
}
*/

/*2) Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.*/

/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int bukva = 0, cifra = 0, simvol = 0;
	char str[100];
	cout << "Введите строку:" << endl;
	cin.getline(str, 100);
	for (int i = 0; i < strlen(str); i++)
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))        //(isalpha(str[i]))
			bukva++;
		else if ((str[i] >= '0') && (str[i] <= '9'))                                             //(isdigit(str[i]))
			cifra++;
		else
			simvol++;
	}
	cout << "Количество букв в строке: " << bukva << endl;
	cout << "Количество цифр в строке: " << cifra << endl;
	cout << "Количество других символов в строке: " << simvol << endl;
}
*/


/*3) Дана строка символов. Необходимо проверить, является ли эта строка палиндромом.*/

/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char stroka[] = "sum summus mus";             //лат. я-сильнейшая мышь
	int size = strlen(stroka);
	int a = 1;

	cout << "Проверяем, является ли строка  ' " << stroka << " '  палиндромом" << endl<<endl;
	for (int i = 0; i < size / 2; i++)
	{
		if (stroka[i] != stroka[size - 1 - i])
		{
			a = 0;
		}
	}
	if (a == 1)
		cout << "Да, является палиндромом" << endl;
	else
		cout << "Нет, не является палиндромом" << endl;
}

*/



/*4) Написать программу, которая вставляет в заданную строку в указанную позицию заданный символ.*/

/*#include <iostream>
using namespace std;

void Insert(char* str, int size, int Pos, char Sim)
{
	for (int i = size; i > Pos - 2; i--)
		str[i + 1] = str[i];
	str[Pos - 1] = Sim;
}

int main()
{
	setlocale(LC_ALL, "");
	int position, size = 0;
	char* stroka = new char[10];
	char simvol;
	cout << "Введите строку  "<<endl;
	cin.getline(stroka, 10);
	cout << "Введите символ, который нужно вставить в строку  "<<endl;
	cin >> simvol;
	cout << "Введите позицию, на которой будет стоять символ  "<<endl;
	cin >> position;

	while (stroka[size])
	{
		size++;
	}

	Insert(stroka, size, position, simvol);

	cout << stroka << endl;
}
*/


/*5) Написать собственный вариант функции strcmp().*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	char otvet[] = "lenovo";    
	char vopros[80];           
	do
	{
		cout << "Модель ноутбука  " << endl;
		cin >> vopros;  
	} 
	while (strcmp(otvet, vopros) != 0); 
 
	cout << "\nПравильный ответ!"<<endl;
}
*/

/*6) Написать собственный вариант функции strcat().*/

/*#include <iostream>
#include <cstring>

using namespace std;

char* bax(char* b, char* a)
{

   char* nov=b;
   while(*++nov);
   while(*a)
   {
   *nov=*a;
    a++;
    nov++;
   }
    *nov=0;
    return b;
}
int main()
{
	cout << "demonstriruem rabotu cobstvennoi funczii szepleniya strok" << endl;
	char* g, * w, * y, * m;
	g = "kuku";
	m = "kukareku";
	w = "kuku";
	y = "kukareku";
	cout << "1-ya stroka " << *g << endl;
	cout << " 2-ya stroka " << *m << endl;
	cout << "soedinyaem i poluchaem" << endl;
	puts(bax(g, w));
	cout << endl;
}
*/

/*7) Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, максимальная температура, 
подача пара (да/нет), мощность). Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/

/*#include <iostream>

using namespace std;

struct iron
{
	char firma[30];
	char model[30];
	char cvet[30];
	int minTemp;
	int maxTemp;
	char par[10];
	int power;
};
void main()
{
	setlocale(LC_ALL, "");
	iron Philips = { "Philips", "Azur", "фиолетовый", 130, 200 , "Да", 2600 };
	cout << "Характеристики утюга" << endl;
	cout << "Фирма изготовитель.... " << Philips.firma << endl;
	cout << "Модель....  " << Philips.model << endl;
	cout << "Цвет утюга....  " << Philips.cvet << endl;
	cout << "Минимальная температура нагрева.... " << Philips.minTemp << endl;
	cout << "Максимальная температура нагрева.... " << Philips.maxTemp << endl;
	cout << "Есть ли подача пара(да/нет)....  " << Philips.par << endl;
	cout << "Мощность утюга.... " << Philips.power << endl;
}
*/

/*8) Разработать структуру, которая описывает животное (название, класс, кличка). Создать функции для работы с 
этой структурой: заполнение объекта; вывод на экран данных об объекте.*/


/*#include <iostream>

using namespace std;

struct pet
{
	char nazvanie[30];
	char clas[30];
	char name[30];
};
pet petyour()
{
	setlocale(LC_ALL, "");
     pet your;
	cout << "Название вашего животного?" << endl;
	cin >> your.nazvanie;
	cout<< endl;
	cout << "Его класс?" << endl;
	cin >> your.clas;
	cout<< endl;
	cout << "Его кличка?" << endl;
	cin >> your.name;
	cout<< endl<<endl;
	return your;
}
void printpet(pet your)
{
	cout << "Информация о вашем животном  " << endl;
	cout << "Название....  " << your.nazvanie << endl;
	cout << "Класс....   " << your.clas << endl;
	cout << "Его кличка....   " << your.name << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	pet Matilda = {"паук", "паукообразные", "Матильда"};
	cout << "Мой домашний питомец" << endl;
	cout << "Название....  " << Matilda.nazvanie << endl;
	cout << "Класс....   " << Matilda.clas << endl;
	cout << "Его кличка....   " << Matilda.name << endl<<endl<<endl;
	printpet(petyour());
}
*/