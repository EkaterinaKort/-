/*Задание 1. Написать функцию, которая принимает два
параметра: основание степени и показатель степени, и
вычисляет степень числа на основе полученных данных.*/


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
	cout << " Введите число a : "<<endl;
	cin >> a;
	cout << " Введите степень, в которую нужно возвести число а : "<<endl;
	cin >> b;
	cout << a << "  в степени  "<< b << "  равно " << degree_number(a, b);
	
	return 0;
}
	*/



/*Задание 2. Написать функцию, которая получает в каче-
стве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними.*/

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
		cout << "Неверный ввод!" << endl;
	return 0;

}
int main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите первое число диапазона " << endl;
	cin >> a;
	cout << "Введите второе число диапазона " << endl;
	cin >> b;
	cout << "Сумма равна " << function(a, b) << endl;
	return 0;
}
*/


/*Задание 3. Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.*/

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
	cout << "Введите первое число диапазона " << endl;
	cin >> a;
	cout << "Введите второе число диапазона " << endl;
	cin >> b;
	cout << digit(a, b);
}
*/

/*Задание 4. Написать функцию, выводящую на экран
переданную ей игральную карту.*/

/*#include <iostream>                                        //самое забавное задание) карта получается вроде бы симпатичная) играем в покер!)
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
		cout << '|' << setw(12) << "Червы" << "       |\n"; break;
	case 2: 
		cout << '|' << setw(12) << "Бубны" << "       |\n"; break;
	case 3: 
		cout << '|' << setw(12) << "Треф" << "       |\n"; break;
	case 4: 
		cout << '|' << setw(12) << "Пики" << "       |\n"; break;
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
	cout << "Выберите карту\n1 - Туз \n2 - двойка\n3 - Тройка\n4 - Четверка\n5 - Пятерка\n6 - Шестерка\n7 - Семерка\n8 - Восьмерка\n9 - Девятка\n10 - Десятка\n11 - Валет\n12 - Дама\n13 - Король" << endl;
	cin >> a;
	cout << "\n\t\t\tМасть: \n1. Червы.\n2. Бубны\n3. Треф\n4. Пики\n";
	cout << "Выберите масть ";
	cin >> s;
	card(s, a);
}
*/

/*Задание 5. Написать функцию, которая определяет, яв-
ляется ли «счастливым» шестизначное число.*/

/*#include <iostream>
using namespace std;

bool isHappy(int a) 
{
	if (a < 100000 || a > 999999)
	{
		cout << "Неверный ввод" << endl;
		return false;
	}
    int sum1, sum2;
	sum1 = a % 10 + (a/ 10) % 10 + (a/ 100) % 10;                       
	sum2 = (a / 1000) % 10 + (a/ 10000) % 10 + (a / 100000) % 10;
	if (sum1 == sum2)
	{
		cout << "Счастливое число" << endl;
		return true;
	}
	else
	{
		cout << "Несчастливое число" << endl;
		return false;
	}
}

int main() 
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите шестизначное число "<<endl;
	cin >> n;
	cout << isHappy(n);
}
*/
