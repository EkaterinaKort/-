/*1) �������� ������ ������� ��� ������ �������� ��������������� �������� �������.*/

/*#include <iostream>

using namespace std;

template<typename T>void func(T arr[], int size)
{
    setlocale(LC_ALL, "");
    srand(time(0));
    double SrAr = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        SrAr +=arr[i];
        cout << arr[i] <<"  ";
    }
    cout << endl;
    cout << "������� ��������������  " << SrAr/size << endl;
}
int main()
{
    int arr[10];
    func(arr, 10);
}
*/

/*2) �������� �������, ������� ��������� � �������� ���������� ������������ ����� � ���������� ������ ����� ���������� �����, ������� ������ ��������.
������� ������� �������� ���������� �������������� ������������� ����� �� ��������� ���������� ������ ����� ���������� �����.*/

/*#include <iostream>

using namespace std;

double chislo(double a, int n)
{
    setlocale(LC_ALL, "");                                                 

    for (int i = 0; i < n+1; i++)
    {
        a *= 10;	//�������� ������� ������ 
    }  
    a = (int)a;
    if ((int)a % 10 >= 5)
    {
        a=(int) a/ 10;
        a+=1;
    }
    else
        a /= 10;
    for (int i = 0; i < n; i++)
    {
       a/= 10;	//�������� ������� ������� ������
    }
    cout << "���������  " << a << endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "");
    double a;
    int n;
    cout << "������� ������������ �����, ������� ����� ���������" << endl;
    cin >> a;
    cout << "������� ���������� ������ ����� �������, ������� ������ �������� " << endl;
    cin >> n;
    chislo(a, n);
}
*/


/*3) � ������� ��������� #define �������� ������ ��� ���������� �������� �� ���� �����.*/


/*#include <iostream>

using namespace std;

#define MAX(a, b) (a >= b ? a : b)

void main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "������� ������ ����� " << endl;
    cin >> a;
    cout << "������� ������ ����� " << endl;
    cin >> b;
    cout << "������� ����� = " << MAX(a, b) << endl;
}

*/



