/*1) Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве переменных-членов.
Реализуйте функции-члены для ввода данных в переменные-члены, для выполнения арифметических операций
(сложение, вычитание, умножение, деление). Арифметические операции должны выполняться с двумя дробями.
Пример заголовка функции-члена для сложения дробей: void Sum(drob x).*/


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
        cout << "Дробь  " << chisl << '/' << znamen << endl;
    }
    void div(Drob x)
    {
        znamen *= x.chisl;
        cout << "Дробь  " << chisl << '/' << znamen << endl;
    }
    void sum(Drob x)
    {
        chisl += (x.znamen * znamen);
        cout << "Дробь  " << chisl << '/' << znamen << endl;
    }
    void sub(Drob x)
    {
        chisl -= (x.znamen * znamen);
        cout << "Дробь  " << chisl << '/' << znamen << endl;
    }
    void show()
    {
        cout << "Текущая дробь:  " << chisl << '/' << znamen << endl;
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
    cout << "Введите числитель:" << endl;
    cin >> a;
    cout << "Введите знаменатель:" << endl;
    cin >> b;
    Drob obj;
    obj.Input(a, b);
    do {
        obj.reduct(obj.peredacha());
        obj.show();
        cout << "1:Прибавить к дроби число" << endl;
        cout << "2:Отнять от дроби число" << endl;
        cout << "3:Умножить дробь на число" << endl;
        cout << "4:Разделить дробь на число" << endl;
        cout << "Выберите действия:" << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            cout << "Введите числитель и знаменатель " << endl;
            cin >> a;
            cin >> b;
            obj.sum(Drob());
            break;
        case 2:
            cout << "Введите числитель и знаменатель" << endl;
            cin >> a;
            cin >> b;
            obj.sub(Drob());
            break;
        case 3:
            cout << "Введите числитель и знаменатель" << endl;
            cin >> a;
            cin >> b;
            obj.Mult(Drob());
            break;
        case 4:
            cout << "Введите числитель и знаменатель" << endl;
            cin >> a;
            cin >> b;
            obj.div(Drob());
            break;
        default:
            cout << "Попробуйте еще раз" << endl;
        }
        cout << "Продолжить работу? (y/n)" << endl;
        cin >> c;
    } while (c != 'n');
    return 0;
}
*/

/*2) Дан некоторый текст. Посчитайте количество предложений в этом тексте.*/

/*
#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    char text[1000];
    cout << "Введите текст  " << endl;
    cin.getline(text, 1000);
    int end = 0;

    for (int i = 0; text[i] != 0; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            end++;
    }
    cout <<"Количество предложений  "<< end;
}
*/
/*3) Дан некоторый текст. Найти количество точек и запятых в этом тексте.*/

/*
#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    char text[1000];
    cout << "Введите текст  " << endl;
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
    cout << "Количество точек " << tochka << endl;
    cout << "Количество запятых " << zapyataya << endl;
}

*/




