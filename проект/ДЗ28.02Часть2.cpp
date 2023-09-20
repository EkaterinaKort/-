/*������� 1. �������� ���������, ������� ������� ����-
������ ������ � ��������� ��� �� ���������� ��������:
������������ ������ ����� (��������, 3) ������ �������
������� ��������� �������� ����� �����, ��������-
��� ������� ������� ��������� �������� ����� �����
����������� �� 2 (�.�. 6 ��� ������ �������), ������
������� ������� ���������� ������� ���������� ��
2 (�.�. 6*2=12 ��� ������ �������). ��������� ������
������� �� �����.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    const int r = 5, c = 5;
    int ar[r][c];

    cout << "������� ������ ����� ������� " << endl;
    cin >> a;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                ar[i][j] = a;
            else
                ar[i][j] =ar[i][j-1]* 2;
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
*/



/*������� 2. �������� ���������, ������� ������� ����-
������ ������ � ��������� ��� �� ���������� ��������:
������������ ������ ����� (��������, 3) ������ �������
������� ��������� �������� ����� �����, �����������
������� ������� ��������� �������� ����� ����� + 1 (�.�.
4 ��� ������ �������), ������ ������� ������� �������-
��� ������� + 1 (�.�. 5 ��� ������ �������). ���������
������ ������� �� �����.*/


/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    const int r = 5, c = 5;
    int ar[r][c];

    cout << "������� ������ ����� ������� " << endl;
    cin >> a;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                ar[i][j] = a;
            else
                ar[i][j] = ar[i][j - 1] +1;
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
*/



/*������� 3. �������� ���������� ������. ��������� ���
���������� ������� � �������� �� �����. ������������
�������� ���������� ������� � ��������� (�����, ������, 
�����, ����). ��������� ����� ������� � �������� ��
����� ���������� ���������. ����� �����������.
��������, ���� �� ����� ��������� ������
1 2 0 4 5 3
4 5 3 9 0 1
� ������������ ������ ����� �� 2 ������� ������, �� ��
�������
5 3 1 2 0 4
0 1 4 5 3 9*/


/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int row, col, side, temp, shift;

	do
	{
		cout << "������� ���������� ����� �� 10: "; 
		cin >> row; 
		cout << endl;
		cout << "������� ���������� �������� �� 10: "; 
		cin >> col; 
		cout << endl;

		int** arr = new int * [row]; 

		for (int i = 0; i < row; i++) 
		{
			arr[i] = new int[col];
		}

		if (col > 10 || col < 0 || row > 10 || row < 0) 
		{
			cout << "�������� ���� ������ � �������. ��������� ����!" << endl;
		}
		else
		{
			srand(time(0));
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					arr[i][j] = rand() % 100;
				}
			}
			for (int i = 0; i < row; i++)
			{
				cout << "  ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << "  ";
				}
				cout << endl;
			}

			cout << endl;

			cout << "����� � ������� ������� " << endl;
			cout << "1 - �����" << endl;
			cout<< "2 - ������" << endl;
			cout << "3 - �����" << endl;
			cout << "4 - ����" << endl;

			cout << "������� ������� ������: "; 
			cin >> side; 
			cout << endl;
			cout << "������� ���������� �������: "; 
			cin >> shift; 
			cout << endl;

			if (side == 1) // ����� �����
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < row; j++)
					{
						temp = arr[j][0];

						for (int g = 0; g < col - 1; g++)
						{
							arr[j][g] = arr[j][g + 1];
						}

						arr[j][col - 1] = temp;
					}
				}
			}
			else if (side == 2) // ����� ������
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < row; j++)
					{
						temp = arr[j][col - 1];

						for (int g = col - 1; g > 0; g--)
						{
							arr[j][g] = arr[j][g - 1];
						}

						arr[j][0] = temp;
					}
				}
			}
			else if (side == 3) // ����� �����
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < col; j++)
					{
						temp = arr[0][j];

						for (int g = 0; g < row - 1; g++)
						{
							arr[g][j] = arr[g + 1][j];
						}

						arr[row - 1][j] = temp;
					}
				}
			}
			else if (side == 4) // ����� ����
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < col; j++)
					{
						temp = arr[row - 1][j];

						for (int g = row - 1; g > 0; g--)
						{
							arr[g][j] = arr[g - 1][j];
						}

						arr[0][j] = temp;
					}
				}
			}
			cout << "��������� ������.";
			cout << endl;

			//����� ������� ����� ������

			for (int i = 0; i < row; i++)
			{
				cout << "  ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << "  ";
				}
				cout << endl;
			}
		}

		for (int i = 0; i < row; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;

	} while (side!=5);
	cout << "�������� ����" << endl;
}
*/

/*

#include<iostream>
#include<time.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
const int row = 5;
const int col = 5;
int array[row][col];
int digit, sdvig, choise, temp;
cout << "������� ������ ������� ������� :";
cin >> digit;
for (int i = 0; i < row; i++) {

	for (int j = 0; j < col; j++) {
		array[i][j] = digit;
		cout << array[i][j] << "\t";// ������ �� ������, � ������� ���� ����� ���� �������� ���������� ��� ���
		digit += 1;
	}
	cout << " " << endl;
}

do {

	cout << "������� ���������� ������� � �������: ";
	cin >> sdvig;
	cout << "�������� ����������� ������� �������:" << endl;
	cout << "1 - ������� � ����" << endl;
	cout << "2 - ������� � �����" << endl;
	cout << "3 - ������� � ����" << endl;
	cout << "4 - ������ � ���" << endl;

	cin >> choise;
	if (choise == 1)
	{
		for (int i = 0; i < row; i++)
		{
			for (int a = 0; a < sdvig; a++) {
				temp = array[i][0];
				for (int j = 0; j < col - 1; j++)
				{
					array[i][j] = array[i][j + 1];
				}
				array[i][col - 1] = temp;
			}
		}


		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {
				cout << array[i][j] << "\t";// ������ �� ������, � ������� ���� ����� ���� �������� ���������� ��� ���
			}
			cout << " " << endl;
		}
	};
	if (choise == 2)
	{
		for (int i = 0; i < row; i++)
		{
			for (int a = 0; a < sdvig; a++) {
				temp = array[i][0];
				for (int j = col - 1; j > 0; j--)
				{
					array[i][j] = array[i][j - 1];
				}
				array[i][0] = temp;
			}
		}

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {
				cout << array[i][j] << "\t";// ������ �� ������, � ������� ���� ����� ���� �������� ���������� ��� ���
			}
			cout << " " << endl;
		}
	};


} while (choise != 0);
return 0;
}
*/