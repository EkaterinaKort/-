/*1) �������� ������� - ��� ������������� ���������� � ������������ ����������, �������� ������� ������������ (� ������ ���������) 
��� ���������� ������������ ��������� (��������, �������� ��������� �������� �������� - �� 0 �� 100). 
������� ����� ������ ��������. �������� ��������������� �������. ���������� ����������� ������������
������������ � ������������� ��������, ���������� �������� �� 1, ����������� �������� ��������.*/


/*#include <iostream>
using namespace std;

class schetchik
{
    int k, min, max, k2;
public:
    schetchik()
    {
        int k2 = 0, min = 0, max = 100;
    }
    void Inpmin(int);
    void Inpmax(int);
    void Plus();
    void Show();
}obj;
void schetchik::Plus()
{
    k++;
    if (k >= (max + 1))
    {
        k2++;
        k = min;
    }

}
void schetchik::Inpmin(int b)
{
    min = b;
    k = min;
}
void schetchik::Inpmax(int d)
{
    max = d;
}

void schetchik::Show()
{
    cout <<"�������� �������� �� "<< k2 << "  ����� : " << k << endl;
}
void main()
{
    setlocale(LC_ALL, "");
    int omax = 0, omin = 0, key = 0;
    do
    {
        cout << "������� ����������� ��������: "<< endl;
        cin >> omin;
        cout << "������� ������������ ��������: "<< endl;
        cin >> omax;
        if ((omax < omin) || (omin == omax))
            cout << "������ ������������ �������� \n ��������� ����\n";
    } while ((omax < omin) || (omin == omax));
    obj.Inpmin(omin);
    obj.Inpmax(omax);
    system("pause");
    system("cls");
    do
    {
        cout << "1. ���������� �������� �� 1\n 2. ����� �������� ��������\n 0. �����\n";
        cin >> key;
        switch (key)
        {
        case 1:
            obj.Plus();
            system("cls");
            break;
        case 2:
            obj.Show();
            system("pause");
            system("cls");
            break;
        case 0:
            cout << "�� ��������! "<<endl;
            break;
        default:
            cout << "������� �������� ��������"<<endl;
            system("pause");
            system("cls");
            break;
        }
    }

    while (key != 0);
}
*/



/*2) �������� �����, ����������� ���� � ������������ ����.*/

/*#include <iostream>
using namespace std;

class lift
{
public:
    int year, weight, etag;
    string type;

    void info()
    {
        cout << "��� �����  " << type << "\t��� �������  " << year << "\t����������������  " << weight <<"\t��������� ����  "<< etag << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "");

    lift gruz;
    gruz.type = "��������";
    gruz.year = 2015;
    gruz.weight = 500;
    gruz.etag = 20;
    gruz.info();
    lift passag;
    passag.type = "������������";
    passag.year = 2020;
    passag.weight = 200;
    passag.etag = 9;
    passag.info();
    return 0;
}
*/


/*3) �������� �������, ������� ������� �� ������ ��� ��������� � �� (����������) ��������� �������.*/


/*#include <iostream>
using namespace std;

void delet(char* arr, char ch)
{
    const char* old = arr;
    while (*old)
    {
        if (*old != ch) 
        {
            *arr = *old;
            ++arr;
        }
        ++old;
    }
    *arr = '\0';
}
int main()
{
    char str[] = "This is how you remind me";
    cout << str << endl;
    delet (str, 'i');
    cout << str << endl;
    return 0;
}
*/


