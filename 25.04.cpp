/*1) ���� ������ ��������. ������������ ������ ������� ������. ���������, ������� ��� �� ����������� � ������.*/
/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	char stroka[] = "smoke on the water a fire in the sky, smoke on the water";
	int size = strlen(stroka);
	char simbol;
	int sum = 0;

	cout << "���� ��������� ������� �� ����� Deep purple 'Smoke on the water'  " << endl<<endl;
	cout << stroka << endl << endl;
	cout << "�������, ����� ������ ����� �������?" << endl;
	cin >> simbol;
	
	for (int i = 0; i < size; i++)
	{
		if (stroka[i] == simbol)
		{
			sum++;
		}
	}
	cout << endl;
	cout << "���������� �������� ������� �����   " << sum << endl;
}
*/

/*2) ���� ������ ��������. ���������� ���������� ����, ���� � ��������� ��������, �������������� � ������.*/

/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int bukva = 0, cifra = 0, simvol = 0;
	char str[100];
	cout << "������� ������:" << endl;
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
	cout << "���������� ���� � ������: " << bukva << endl;
	cout << "���������� ���� � ������: " << cifra << endl;
	cout << "���������� ������ �������� � ������: " << simvol << endl;
}
*/


/*3) ���� ������ ��������. ���������� ���������, �������� �� ��� ������ �����������.*/

/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char stroka[] = "sum summus mus";             //���. �-���������� ����
	int size = strlen(stroka);
	int a = 1;

	cout << "���������, �������� �� ������  ' " << stroka << " '  �����������" << endl<<endl;
	for (int i = 0; i < size / 2; i++)
	{
		if (stroka[i] != stroka[size - 1 - i])
		{
			a = 0;
		}
	}
	if (a == 1)
		cout << "��, �������� �����������" << endl;
	else
		cout << "���, �� �������� �����������" << endl;
}

*/



/*4) �������� ���������, ������� ��������� � �������� ������ � ��������� ������� �������� ������.*/

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
	cout << "������� ������  "<<endl;
	cin.getline(stroka, 10);
	cout << "������� ������, ������� ����� �������� � ������  "<<endl;
	cin >> simvol;
	cout << "������� �������, �� ������� ����� ������ ������  "<<endl;
	cin >> position;

	while (stroka[size])
	{
		size++;
	}

	Insert(stroka, size, position, simvol);

	cout << stroka << endl;
}
*/


/*5) �������� ����������� ������� ������� strcmp().*/
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
		cout << "������ ��������  " << endl;
		cin >> vopros;  
	} 
	while (strcmp(otvet, vopros) != 0); 
 
	cout << "\n���������� �����!"<<endl;
}
*/

/*6) �������� ����������� ������� ������� strcat().*/

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

/*7) ����������� ��������� ����� (�����, ������, ����, ����������� �����������, ������������ �����������, 
������ ���� (��/���), ��������). �������� ��������� ��������� � ���������������� ������ � ���.*/

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
	iron Philips = { "Philips", "Azur", "����������", 130, 200 , "��", 2600 };
	cout << "�������������� �����" << endl;
	cout << "����� ������������.... " << Philips.firma << endl;
	cout << "������....  " << Philips.model << endl;
	cout << "���� �����....  " << Philips.cvet << endl;
	cout << "����������� ����������� �������.... " << Philips.minTemp << endl;
	cout << "������������ ����������� �������.... " << Philips.maxTemp << endl;
	cout << "���� �� ������ ����(��/���)....  " << Philips.par << endl;
	cout << "�������� �����.... " << Philips.power << endl;
}
*/

/*8) ����������� ���������, ������� ��������� �������� (��������, �����, ������). ������� ������� ��� ������ � 
���� ����������: ���������� �������; ����� �� ����� ������ �� �������.*/


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
	cout << "�������� ������ ���������?" << endl;
	cin >> your.nazvanie;
	cout<< endl;
	cout << "��� �����?" << endl;
	cin >> your.clas;
	cout<< endl;
	cout << "��� ������?" << endl;
	cin >> your.name;
	cout<< endl<<endl;
	return your;
}
void printpet(pet your)
{
	cout << "���������� � ����� ��������  " << endl;
	cout << "��������....  " << your.nazvanie << endl;
	cout << "�����....   " << your.clas << endl;
	cout << "��� ������....   " << your.name << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	pet Matilda = {"����", "�������������", "��������"};
	cout << "��� �������� �������" << endl;
	cout << "��������....  " << Matilda.nazvanie << endl;
	cout << "�����....   " << Matilda.clas << endl;
	cout << "��� ������....   " << Matilda.name << endl<<endl<<endl;
	printpet(petyour());
}
*/