/*1) ���������� ����� �����. ���������� ������� ��������� � ����������� � �������� ����������-������.
���������� �������-����� ��� ����� ������ � ����������-�����, ��� ���������� �������������� ��������
(��������, ���������, ���������, �������). �������������� �������� ������ ����������� � ����� �������.
������ ��������� �������-����� ��� �������� ������: void Sum(drob x).*/


/*#include <iostream>
#include <string>
using namespace std;

class Drob {
private:
    int chisl;
    int znamen;
    int NOD(int x, int y)
    {
        if (y == 0) return x;
        return NOD(y, x % y);
    }
public:
    void Input(int c, int z)
    {
        chisl = c;
        znamen = z;
    }
    void Mult(Drob x)
    {
        chisl *= x.chisl;
        cout << "�����  " << chisl << '/' << znamen << endl;
    }
    void div(Drob x)
    {
        znamen *= x.chisl;
        cout << "�����  " << chisl << '/' << znamen << endl;
    }
    void sum(Drob x)
    {
        chisl += (x.znamen * znamen);
        cout << "�����  " << chisl << '/' << znamen << endl;
    }
    void sub(Drob x)
    {
        chisl -= (x.znamen * znamen);
        cout << "�����  " << chisl << '/' << znamen << endl;
    }
    void show()
    {
        cout << "������� �����:  " << chisl << '/' << znamen << endl;
    }
    int peredacha()
    {
        return NOD(chisl, znamen);
    }
    void reduct(int x)
    {
        chisl /= x;
        znamen /= x;
    }
};
int main() {
    int a, b, m;
    char c = 'y';
    setlocale(LC_ALL, "");
    cout << "������� ���������:" << endl;
    cin >> a;
    cout << "������� �����������:" << endl;
    cin >> b;
    Drob obj;
    obj.Input(a, b);
    do {
        obj.reduct(obj.peredacha());
        obj.show();
        cout << "1:��������� � ����� �����" << endl;
        cout << "2:������ �� ����� �����" << endl;
        cout << "3:�������� ����� �� �����" << endl;
        cout << "4:��������� ����� �� �����" << endl;
        cout << "�������� ��������:" << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            cout << "������� ��������� � ����������� " << endl;
            cin >> a;
            cin >> b;
            obj.sum(Drob());
            break;
        case 2:
            cout << "������� ��������� � �����������" << endl;
            cin >> a;
            cin >> b;
            obj.sub(Drob());
            break;
        case 3:
            cout << "������� ��������� � �����������" << endl;
            cin >> a;
            cin >> b;
            obj.Mult(Drob());
            break;
        case 4:
            cout << "������� ��������� � �����������" << endl;
            cin >> a;
            cin >> b;
            obj.div(Drob());
            break;
        default:
            cout << "���������� ��� ���" << endl;
        }
        cout << "���������� ������? (y/n)" << endl;
        cin >> c;
    } while (c != 'n');
    return 0;
}
*/

/*2) ��� ��������� �����. ���������� ���������� ����������� � ���� ������.*/

/*
#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    char text[1000];
    cout << "������� �����  " << endl;
    cin.getline(text, 1000);
    int end = 0;

    for (int i = 0; text[i] != 0; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            end++;
    }
    cout <<"���������� �����������  "<< end;
}
*/
/*3) ��� ��������� �����. ����� ���������� ����� � ������� � ���� ������.*/

/*
#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    char text[1000];
    cout << "������� �����  " << endl;
    cin.getline(text, 1000);
    int tochka = 0;
    int zapyataya = 0;

    for (int i = 0; text[i] != 0; i++)
    {
        if (text[i] == '.')
            tochka++;
        if (text[i] == ',')
            zapyataya++;
    }
    cout << "���������� ����� " << tochka << endl;
    cout << "���������� ������� " << zapyataya << endl;
}

*/




