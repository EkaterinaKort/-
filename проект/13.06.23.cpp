/*1) �������� ����� �����, ���������� ������������� ���� ��������� � �����������. �������� � �����
���������� ���������� +, -, *, /. ��� �������������� ��������� ������ ��������� �������� ��� ����� �������.*/


/*#include <iostream>
#include <string>
using namespace std;

class Drob {
private:
    int chisl;
    int znamen;
public:
    void Input(int c, int z)
    {
        chisl = c;
        znamen = z;
    }
    Drob operator * (Drob& obj2)
    {
        
        chisl = chisl * obj2.chisl;
        znamen = znamen * obj2.znamen;
        cout << "��������� " << chisl << '/' << znamen << endl;
        return *this;
    }
    Drob operator / (Drob& obj2)
    {
        znamen = obj2.znamen * chisl;
        chisl = obj2.znamen * obj2.chisl;
        cout << "���������  " << chisl << '/' << znamen << endl;
        return *this;
    }
    Drob operator+ (Drob& obj2)
    {
        chisl = ((chisl* obj2.znamen) + (obj2.chisl*znamen));
        znamen = znamen * obj2.znamen;
        cout << "���������  " << chisl << '/' << znamen << endl;
        return *this;
    }
    Drob operator- (Drob& obj2)
    {
        chisl = ((chisl * obj2.znamen) - (obj2.chisl * znamen));
        znamen = znamen * obj2.znamen;
        cout << "�����  " << chisl << '/' << znamen << endl;
        return *this;
    }
    void show()
    {
        cout << "������� �����:  " << chisl << '/' << znamen << endl;
    }
};
int main() 
{
    int a, b, m;
    char c = 'y';
    setlocale(LC_ALL, "");
    cout << "������� ���������:" << endl;
    cin >> a;
    cout << "������� �����������:" << endl;
    cin >> b;
    Drob obj;
    Drob obj1;
    Drob obj2;
    obj1.Input(a, b);
  
    do {
        obj1.show();
        
        cout << "1:��������� � ����� �����" << endl;
        cout << "2:������ �� ����� �����" << endl;
        cout << "3:�������� ����� �� �����" << endl;
        cout << "4:��������� ����� �� �����" << endl;
        cout << "�������� ��������:" << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            cout << "������� ���������  " << endl;
            cin >> a;
            cout << "������� �����������  " << endl;
            cin >> b;
            obj2.Input(a, b);
            obj=(obj1 + obj2);
            obj.show();
            break;
        case 2:
            cout << "������� ��������� " << endl;
            cin >> a;
            cout << "������� �����������  " << endl;
            cin >> b;
            obj2.Input(a, b);
            obj = (obj1 - obj2);
            obj.show();
            break;
        case 3:
            cout << "������� ��������� " << endl;
            cin >> a;
            cout << "������� �����������  " << endl;
            cin >> b;
            obj2.Input(a, b);
            obj=obj1 * obj2;
            obj.show();
            break;
        case 4:
            cout << "������� ��������� " << endl;
            cin >> a;
            cout << "������� �����������  " << endl;
            cin >> b;
            obj2.Input(a, b);
            obj=(obj1 / obj2);
            obj.show();
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



/*2) �������� ����� Date, ������� �������� ���������� � ���� (����, �����, ���).
� ������� ���������� ���������� ���������� �������� �������� ���� ���
(��������� - ��� ���������� ���� ����� ������), � ����� �������� ���������� ����
�� ������������ ���������� ����.
*/


/*#include <iostream>
class Date 
{
private:
    bool leapyear;
    int day;
    int month;
    int year;
    bool leap(int)const;
    int maxday()const;
public:
    Date(int d, int m, int y) :leapyear(leap(y)), day(d), month(m), year(y) {};
    Date& operator+=(int);
    Date& operator-=(int);
    std::string operator-(Date&)const;
    bool operator==(Date&)const;
    friend std::ostream& operator<<(std::ostream&, const Date&);
};
bool Date::leap(int y)const 
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400);
}
int Date::maxday()const 
{
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (leapyear)days[1] = 29;
    return days[month - 1];
}
Date& Date::operator+=(int d) 
{
    if (day + d > maxday()) 
    {
        d -= maxday() - day;
        if (++month > 12) 
        {
            month = 1;
            year++;
        }
        while (d / maxday()) 
        {
            if (++month > 12) 
            {
                month = 1;
                year++;
            }
            d -= maxday();
        }
        day = d;
    }
    else day += d;
    return *this;
}
Date& Date::operator-=(int d) 
{
    if (day - d < 1) {
        d -= day;
        if (--month == 0) 
        {
            month = 12;
            year--;
        }
        while (d / maxday()) 
        {
            d -= maxday();
            if (--month == 0) 
            {
                month = 12;
                year--;
            }
        }
        day = maxday() - d;
    }
    else day -= d;
    return *this;
}
#include <sstream>        
std::string Date::operator-(Date& dt)const 
{
    int d, m, y;
    if (year >= dt.year) 
    {
        y = year - dt.year;
        if (month > dt.month) 
        {
            m = month - dt.month;
            d = day + dt.maxday() - dt.day;
            if (d > dt.maxday())d -= dt.maxday();
            else --m;
            --y;
        }
        else 
        {
            m = 12 - month + dt.month;
            d = dt.day + maxday() - day;
            if (d > maxday())d -= maxday();
            else --m;
        }
    }
    else 
    {
        y = dt.year - year;
        if (month > dt.month) 
        {
            m = 12 - month + dt.month;
            d = day + dt.maxday() - dt.day;
            if (d > dt.maxday())d -= dt.maxday();
            else --m;
            --y;
        }
        else 
        {
            m = dt.month - month;
            d = maxday() - day + dt.day;
            if (d > maxday())d -= maxday();
            else --m;
        }
    }
    std::string s;
    std::stringstream ss;
    ss << d << " ���� " << m << " ����� " << y << " ��� ";
    getline(ss, s);
    return s;
}
bool Date::operator==(Date& dt)const 
{
    return day == dt.day && month == dt.month && year == dt.year;
}
std::ostream& operator<<(std::ostream& os, const Date& dt) 
{
    std::string m[] = { "������","�������","����","������","���","����","����","������","��������","�������","������","�������" };
    os << dt.day << " " << m[dt.month - 1] << " " << dt.year;
    return os;
}

int main() 
{
    setlocale(LC_ALL, "rus");

    int d, m, y, reduce, increase;
    std::cout << "������� ������ ���� (���� ����� ���): ";
    std::cin >> d >> m >> y;

    Date date(d, m, y);
    std::cout << "���� = " << date << std::endl;
    std::cout << "��������� ���� ��  : ";
    std::cin >> reduce;
    date -= reduce;

    std::cout << "���� = " << date << std::endl;
    std::cout << "��������� ���� �� : ";
    std::cin >> increase;
    date += increase;
    std::cout << "���� = " << date << std::endl;
    std::cout << "������� ������ ���� (���� ����� ���): ";
    std::cin >> d >> m >> y;

    Date date2(d, m, y);
    std::cout << "���� 2 = " << date2 << std::endl;
    //std::cout << "Dates are " << (date == date2 ? "equal" : "not equal") << std::endl;
    std::cout << "���� 1 - ���� 2 = " << date - date2 << std::endl;
    return 0;
}

*/


/*3) �������� � ��� ����� MyString ���������� ����������:
++ (���������� � ����� ������ �������-������ ������ ������� 'x'),
-- (�������� ������ ������� �� ����� ������ �������-������).
� ����� �������� ���������� ���������� (� ���� ������� 
�������������� ������ �� ��������):
MyString + int (���������� � ����� ������ ������� 
������������� ���������� �������� 'x'),
MyString - int (�������� ������������� ���������� �������� 
�� ����� ������ �������).*/



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
        size;
        arr =  nullptr;
        X++;
    }
    MyString(int S)            //����������� ������ ������������� �������
    {
        size = S;
        arr = new char[S];
        X++;
    }
    MyString(const char* s, int d)
    {
        int dlina = strlen(s) + 1;
        size = dlina;
        arr = new char[size];
        X++;
    }
    MyString(const MyString& other)     //����������� �����������
    {
        arr = new char[strlen(other.arr) + 1];
        strcpy_s(arr, strlen(other.arr) + 1, other.arr);
        size = other.size;
        X++;
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
        char* a = new char[s];
        cin >> a;
        dlina = strlen(a) + 1;
        arr = new char[dlina];
        strcpy_s(arr, dlina, a);
    }
    void SetMystring(const char* s)
    {
        int dlina = strlen(s)+1;
        if (arr != NULL)
            delete[] arr;
        size = dlina;
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
        ++size;
        char* temp = new char[size];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i] = arr[i];
        }
        temp[size - 2] = 'X';
        temp[size - 1] = '\0';
        delete[] arr;
        arr = temp;
        return *this;
    }
    MyString& operator+(int n)              //���������� ������������� ���������� �������� � � ����� ������
    {
        size = size + n;
        char* temp = new char[size];
        for (int i = 0; i < size-n; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = size-n-1; i < size; i++)
        {
            temp[i] = 'X';
        }

        temp[size-1] = '\0';
        delete[] arr;
        arr = temp;
        return *this;
    }
    MyString& operator--()
    {
        --size;
        char* temp1 = new char[size];
        for (int i = 0; i < size; i++)
        {
            temp1[i] = arr[i];
        }
        temp1[size - 1] = '\0';
        delete[] arr;
        arr = temp1;
        return *this;
    }
    MyString& operator-(int m)       //�������� ������������� ���������� �������� � ����� ������
    {
        size = size - m;
        char* temp = new char[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size - 1] = '\0';
        delete[] arr;
        arr = temp;
        return *this;
    }
    ~MyString()
    {
        if (arr != nullptr)
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

    //cout << "���������� ���������� �����:   " << MyString::GetX() << endl;

    MyString four;
    char* brr = new char[10];
    cout << "������� ����� ������  " << endl;
    cin >> brr;
    four.SetMystring(brr);
    four.Output();

    //cout << endl << "����� ������������ �����������  " << endl;
    //MyString two = one;
    //two.InPut();
    //two.Output();

    //cout << "����� ���������, ���������� 1 ������ " << endl;
    //--three;
    //MyString Post = three;
    //Post.Output();

    //cout << "����� ���������, ������������ 1 ������ " << endl;
    //++four;
    //MyString Post1 = four;
    //Post1.Output();

    int n;
    cout << "������� ���������� �, ������� ����� ��������� � ����� ������  " << endl;
    cin >> n;
    four = four + n;
  
    four.Output();

    int m;
    cout << "������� ���������� ��������, ������� ����� ������ � ������ ������  " << endl;
    cin >> m;
    four = four - m;

    four.Output();

    delete[] brr;
    return 0;
}
*/