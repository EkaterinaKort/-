/*1) �������� ���� ������� � �������� ������� ������������� �������.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand((int)time(0));
    int n, pos, num;
    cout << "������� ������ ������� "<<endl; 
    cin >> n;
    int* arr = new int[n];
    int* brr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n������� �����, ������� ���������� �������� "<<endl; 
    cin >> num;
    cout << "������� �������, �� ������� ����� ������ �������� ���� ����� "<<endl; 
    cin >> pos;
    brr[pos - 1] = num;
    for (int i = 0; i < n; i++)
    {
        if (i < pos - 1) 
            brr[i] = arr[i];
        else 
            brr[i + 1] = arr[i];
    }
    delete[]arr;
    arr = brr;
    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
    delete[]brr;
}
*/


/*2) �������� �������� ���������� ��������� (��������� ��������) � ����� ������������� �������.*/

/*#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    srand((int)time(0));
    int size, col;
    cout << "������� ������ �������"<<endl;
    cin >> size;
    cout << "������ ���������� ���������, ������� ���������� �������� � ������ " << endl;
    cin >> col;

    int* massiv = new int[size];                  
    for (int i = 0; i < size; i++)
        massiv[i] = i + 1;
    int* hvost = new int[col];
    for (int i = 0; i < col; i++)
        hvost[i] = rand() % 100;
    int* temp = new int[size + col];
    for (int i = 0; i < size; i++)
    {
        temp[i] = massiv[i];
        for (int i = size; i <size+col; i++)
            temp[i] = hvost[i - size];
    }
    delete[] massiv;
    massiv = temp;
    for (int i = 0; i < size + col; i++)
        cout << massiv[i] << " ";
    delete[] massiv;
}
*/

/*3) �������� �������, ������� ��������� �������� ���������� ��������� (��������� ��������) � ����� ������������� �������.*/


/*#include <iostream>

using namespace std;
int* massiv()
{
    setlocale(LC_ALL, "");
    int size, col;
    cout << "������� ������ �������" << endl;
    cin >> size;
    cout << "������ ���������� ���������, ������� ���������� �������� � ������ " << endl;
    cin >> col;
    
    int* massiv = new int[size];
    for (int i = 0; i < size; i++)
        massiv[i] = i + 1;
    int* hvost = new int[col];
    for (int i = 0; i < col; i++)
        hvost[i] = rand() % 100;
    int* temp = new int[size + col];
    for (int i = 0; i < size; i++)
    {
        temp[i] = massiv[i];
        for (int i = size; i < size + col; i++)
            temp[i] = hvost[i - size];
    }
    delete[] massiv;
    massiv = temp;
    for (int i = 0; i < size + col; i++)
        cout << massiv[i] << " ";
    delete[] massiv;
    return massiv;
}
int main()
{
    int* arr = massiv();
}
*/



/*4) �������� �������, ������� ��������� ������ � ���������� 2 ���������� (� ���� ����������-�������) - ������ ������������� 
�������� � ��� ��������.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int &maxE, int &IndMax, int size)
{
    maxE = arr[0], IndMax = 0;
    int i;
    int temp = 0, temp1 = 0;
    
    srand((int)time(0));
    for (i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
        cout << *(arr + i) << "  ";
        if (*(arr + i) > maxE)
        {
            temp = *(arr + i);
            maxE = temp;
            temp1 = i;
            IndMax = temp1;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size];
    int maxE = 0, IndMax = 0;
    massiv(arr, maxE, IndMax, 10);
    cout << endl;
    cout << "������������ ������� �������  " << maxE << endl;
    cout << "������ ������������� ��������   " << IndMax << endl;
}
*/