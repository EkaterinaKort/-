/*Задание 1. Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.Пользователь вводит прибыль
фирмы за каждый месяц.*/


/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const char Month[][12]={"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь"};
    const int size = 6;
    int sum=0;
    int ar[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Введите прибыль за месяц " <<Month[i]<< endl;
        cin >> ar[i];
        sum += ar[i];
    }
    cout << "Прибыль за 6 месяцев " << sum << endl;
    return 0;
}
*/

/*Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.*/


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

    
/*Задание 3. Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо
вычислить периметр пятиугольника (периметр — сумма
всех сторон).*/


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
        cout << "Введите длину стороны пятиугольника " << endl;
        cin >> ar[i];
        sum += ar[i];
    }
    cout << "Периметр пятиугольника " << sum << endl;
    return 0;
}
*/

/*Задание 4. Пользователь вводит прибыль фирмы за год(12 месяцев). Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль
была минимальна.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const char Month[][12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
    int ar[12];
    int max = 0;                                
    int min = 0;                           
    int i = 0;
    int minIndex;
    int maxIndex;
    for (int i = 0; i < 12; i++)
    {
        cout << "Введите прибыль в месяце " << Month[i] << endl;
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
    cout << "Максимальная прибыль " << Month[maxIndex] << endl;
    cout << "Минимальная прибыль " << Month[minIndex] <<endl;
    return 0;
}
*/



