/*������� 1. ��������, ���������, ������� ��������� ������� ����� �� 6 �������.������������ ������ �������
����� �� ������ �����.*/


/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const char Month[][12]={"������", "�������", "����", "������", "���", "����"};
    const int size = 6;
    int sum=0;
    int ar[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "������� ������� �� ����� " <<Month[i]<< endl;
        cin >> ar[i];
        sum += ar[i];
    }
    cout << "������� �� 6 ������� " << sum << endl;
    return 0;
}
*/

/*������� 2. �������� ���������, ������� ������� ���������� ������ � �������� �������.*/


/*#include <iostream>

using namespace std;

int main()
    {
        setlocale(LC_ALL, "");
        const int size = 5;
        int ar[size] = {11, 12, 25, 33, 8};
        int i;

        for (i =size-1; i >=0; i--)
        {
            cout << ar[i] << endl;
        }
        return 0;
    }
   */

    
/*������� 3. ������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ����������
��������� �������� ������������� (�������� � �����
���� ������).*/


/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const int size = 5;
    int sum = 0;
    int ar[size];

    for (int i = 0; i < size; i++)
    {
        cout << "������� ����� ������� ������������� " << endl;
        cin >> ar[i];
        sum += ar[i];
    }
    cout << "�������� ������������� " << sum << endl;
    return 0;
}
*/

/*������� 4. ������������ ������ ������� ����� �� ���(12 �������). ���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� �������
���� ����������.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const char Month[][12] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };
    int ar[12];
    int max = 0;                                
    int min = 0;                           
    int i = 0;
    int minIndex;
    int maxIndex;
    for (int i = 0; i < 12; i++)
    {
        cout << "������� ������� � ������ " << Month[i] << endl;
        cin >> ar[i];
        if (i == 0) {
            min = ar[i];
            max = ar[i];
        }

        if (min >= ar[i]) {
            min = ar[i];
            minIndex = i;
        }
        if (max <= ar[i]) {
            max = ar[i];
            maxIndex = i;
        }
    }
    cout << "������������ ������� " << Month[maxIndex] << endl;
    cout << "����������� ������� " << Month[minIndex] <<endl;
    return 0;
}
*/



