﻿/*ЗАДАНИЕ 1
Написать программу, копирующую последовательно элементы
одного массива размером 10 элементов в 2 массива размером
5 элементов каждый. Элементы первоначального массива можно
сгенерировать в произвольном диапазоне.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
     int ar[10];
     int ar1[5];
     int ar2[5];
     srand(time(0));

     for (int i = 0; i < 10; i++)
     {
         ar[i] = rand();
         cout << ar[i] << "  ";
     }
     cout << endl;
     for (int i = 0; i < 5; i++)
     {
         ar1[i] = ar[i];
         cout << ar1[i] << " ";
     }
     cout << endl;
     for (int i = 5; i < 10; i++)
     {
         ar2[i-5] = ar[i];
         cout << ar2[i-5] << " ";
     }
     cout << endl;
    }
    */



/*ЗАДАНИЕ 2
Напишите программу, которая выполняет поэлементную
сумму двух массивов и результат заносит в третий массив.
Элементы массивов можно сгенерировать в произвольном
диапазоне.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");

     int ar1[10];
     int ar2[10];
     int ar3[10];
     int sum = 0;
     srand (time(0));

     for (int i = 0; i < 10; i++)
     {
         ar1[i] = rand();
         cout << ar1[i] <<" ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
         ar2[i] = rand();
         cout << ar2[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
         ar3[i] = ar1[i] + ar2[i];
         cout << ar3[i] << " ";
     }
     cout << endl;
 }
 */
 

/*ЗАДАНИЕ 3
Пользователь вводит данные о своих расходах в долла-
рах за неделю (каждый день). Написать программу, которая
вычисляет:
■ среднюю (за неделю) потраченную сумму;
■ общую сумму, потраченную пользователем за неделю;
■ количество дней и их названия (например, «вторник»),
когда сумма расхода (в день) превысила 100 долларов.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
     const char Day[][12] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресение" };
     double SA=0;
     double sum = 0;
     int nDay = 0;
     int ar[7];
     int i;

     for (i = 0; i < 7; i++)
     {
         cout << "Введите расходы за " << Day[i] << endl;
         cin >> ar[i];
         sum += ar[i];
     }
     SA = sum / 7  ;
     cout << "Средняя потраченная сумма за неделю: " << SA << endl;
     cout << "Общая потраченная сумма за неделю: " << sum << endl;
     for (i = 0; i < 7; i++)
     {
         if (ar[i] > 100)
         {
             cout << "Превышение расходов: " << Day[i] << " " << ar[i] << endl;
             nDay++;
         }
     }
     cout << "Общее количество дней, где расходы превысили 100 долларов " << nDay << endl;
 }
 */

/*ЗАДАНИЕ 4
Известны данные курса валют (курс доллара по отношению
к евро) за все месяцы года и начисленные проценты за каж-
дый месяц на депозитном счету в евро. Все данные вводятся
пользователем, в том числе и сумма на депозите в евро.
Написать программу, которая по запросу пользователя
(номер месяца) выводит в консоль размер допустимой суммы,
которую он может обналичить, при условии, что у него долла-
ровая карта, обналичить можно не более 50% от начисленной
суммы в том случае, если начисленная сумма в этот месяц
составляет не менее 500$.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
     const char Month[][12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
     double kurs;
     double dep;
     double proc;
     double sumE = 0;
     double sumD = 0;
     int a;
     double nachisleno[12];
     double sumMax=0;

     cout << "Введите курс доллара по отношению к евро " << endl;
     cin >> kurs;
     cout << "Введите проценты " << endl;
     cin >> proc;
     cout << "Введите сумму депозита " << endl;
     cin >> dep;
     cout << "Введите номер месяца, который вы хотите обналичить " << endl;
     cin >> a;

     for (int i = 0; i < a-1; i++)
     {
         nachisleno[i] = dep * proc/100;              //начислено в евро на счет 
         sumE += nachisleno[i];                    //накопление суммы
     }
     sumD = sumE * kurs;                       //перевела сумму в доллары
     for (int i = 0; i < a -1; i++)
     {
         if (sumMax < sumD / 2 && nachisleno[i]>500)      //поделила на 2, можно умножить на 0.5 (50%)
             sumMax += nachisleno[i];
     }
     cout << "Максимальная сумма для снятия со счета за месяц "<<Month[a-1] <<"  составляет "<< sumMax << endl;
 }
 */
