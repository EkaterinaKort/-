/*������� 1. �������� �������, ������� ��������� ���
���������: ��������� ������� � ���������� �������, �
��������� ������� ����� �� ������ ���������� ������.*/


/*#include <iostream>

using namespace std;
double degree_number(double number, double degree)         
{
	int res = 1;
	for (int i = 0; i < degree; i++)
	{
		res *= number;
	}
	return res;
}
int main()
{
	setlocale(LC_ALL, "");
	double a, b;
	cout << " ������� ����� a : "<<endl;
	cin >> a;
	cout << " ������� �������, � ������� ����� �������� ����� � : "<<endl;
	cin >> b;
	cout << a << "  � �������  "<< b << "  ����� " << degree_number(a, b);
	
	return 0;
}
	*/



/*������� 2. �������� �������, ������� �������� � ����-
���� ���������� 2 ����� ����� � ���������� ����� �����
�� ��������� ����� ����.*/

/*#include <iostream>

using namespace std;
int function(int a, int b)
{
	int sum = 0;
	if (a < b)
	{
		for (int i = a; i < b; i++)
		{
			sum += a + 1;
		}
		return sum;
	}
	if (a == b)
	{
		sum = a;
		return sum;
	}
	else
		cout << "�������� ����!" << endl;
	return 0;

}
int main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ������ ����� ��������� " << endl;
	cin >> a;
	cout << "������� ������ ����� ��������� " << endl;
	cin >> b;
	cout << "����� ����� " << function(a, b) << endl;
	return 0;
}
*/


/*������� 3. ����� ���������� �����������, ���� �����
���� ��� ��������� ����� ��� ������. �������� �������
������ ����� ����� �� ��������� ���������.*/

/*#include <iostream>
using namespace std;

int digit(int x, int y)
{
	for (int i = x; i < y; i++)
	{
		int result = 0;
		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				result += j;
			}
		}
		if (result == i && result)
		{
			cout << result << endl;

		}
	}
	return 0;
}

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ������ ����� ��������� " << endl;
	cin >> a;
	cout << "������� ������ ����� ��������� " << endl;
	cin >> b;
	cout << digit(a, b);
}
*/

/*������� 4. �������� �������, ��������� �� �����
���������� �� ��������� �����.*/

/*#include <iostream>                                        //����� �������� �������) ����� ���������� ����� �� �����������) ������ � �����!)
#include <iomanip>
using namespace std;
void card(int suit, int num)
{
	setlocale(LC_ALL, "");
	char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
	cout << " ___________________\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)
		cout << '|' << setw(4) << "1" << card[num - 1] << "              |\n";
	else 
		cout << '|' << setw(4) << card[num - 1] << "               |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	switch (suit)
	{
	case 1: 
		cout << '|' << setw(12) << "�����" << "       |\n"; break;
	case 2: 
		cout << '|' << setw(12) << "�����" << "       |\n"; break;
	case 3: 
		cout << '|' << setw(12) << "����" << "       |\n"; break;
	case 4: 
		cout << '|' << setw(12) << "����" << "       |\n"; break;
	}
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)
		cout << "|              " << "1" << card[num - 1] << "   |\n";
	else 
		cout << "|               " << card[num - 1] << "   |\n";
	cout << "|                   |\n";
	cout << "|___________________|\n";
}

int main()
{
	setlocale(LC_ALL, "");
	int a, s;
	cout << "�������� �����\n1 - ��� \n2 - ������\n3 - ������\n4 - ��������\n5 - �������\n6 - ��������\n7 - �������\n8 - ���������\n9 - �������\n10 - �������\n11 - �����\n12 - ����\n13 - ������" << endl;
	cin >> a;
	cout << "\n\t\t\t�����: \n1. �����.\n2. �����\n3. ����\n4. ����\n";
	cout << "�������� ����� ";
	cin >> s;
	card(s, a);
}
*/

/*������� 5. �������� �������, ������� ����������, ��-
������ �� ����������� ������������ �����.*/

/*#include <iostream>
using namespace std;

bool isHappy(int a) 
{
	if (a < 100000 || a > 999999)
	{
		cout << "�������� ����" << endl;
		return false;
	}
    int sum1, sum2;
	sum1 = a % 10 + (a/ 10) % 10 + (a/ 100) % 10;                       
	sum2 = (a / 1000) % 10 + (a/ 10000) % 10 + (a / 100000) % 10;
	if (sum1 == sum2)
	{
		cout << "���������� �����" << endl;
		return true;
	}
	else
	{
		cout << "������������ �����" << endl;
		return false;
	}
}

int main() 
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������������ ����� "<<endl;
	cin >> n;
	cout << isHappy(n);
}
*/
