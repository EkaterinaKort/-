/*1) Цифровой счетчик - это целочисленная переменная с ограниченным диапазоном, значение которой сбрасывается (к началу диапазона) 
при достижении определённого максимума (например, диапазон возможных значений счетчика - от 0 до 100). 
Опишите класс такого счетчика. Создайте соответствующие сэттеры. Обеспечьте возможность установления
минимального и максимального значений, увеличения счетчика на 1, возвращения текущего значения.*/


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
    cout <<"Значение счетчика от "<< k2 << "  равно : " << k << endl;
}
void main()
{
    setlocale(LC_ALL, "");
    int omax = 0, omin = 0, key = 0;
    do
    {
        cout << "Введите минимальное значение: "<< endl;
        cin >> omin;
        cout << "Введите максимальное значение: "<< endl;
        cin >> omax;
        if ((omax < omin) || (omin == omax))
            cout << "Указан некорректный диапазон \n Повторите ввод\n";
    } while ((omax < omin) || (omin == omax));
    obj.Inpmin(omin);
    obj.Inpmax(omax);
    system("pause");
    system("cls");
    do
    {
        cout << "1. Увеличение счетчика на 1\n 2. Вывод значения счетчика\n 0. Выход\n";
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
            cout << "До свидания! "<<endl;
            break;
        default:
            cout << "Выбрано неверное действие"<<endl;
            system("pause");
            system("cls");
            break;
        }
    }

    while (key != 0);
}
*/



/*2) Написать класс, описывающий лифт в многоэтажном доме.*/

/*#include <iostream>
using namespace std;

class lift
{
public:
    int year, weight, etag;
    string type;

    void info()
    {
        cout << "Тип лифта  " << type << "\tГод выпуска  " << year << "\tГрузоподъемность  " << weight <<"\tЭтажность дома  "<< etag << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "");

    lift gruz;
    gruz.type = "Грузовой";
    gruz.year = 2015;
    gruz.weight = 500;
    gruz.etag = 20;
    gruz.info();
    lift passag;
    passag.type = "Пассажирский";
    passag.year = 2020;
    passag.weight = 200;
    passag.etag = 9;
    passag.info();
    return 0;
}
*/


/*3) Написать функцию, которая удаляет из строки все вхождения в неё (совпадения) заданного символа.*/


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


