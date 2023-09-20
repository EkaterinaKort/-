/*ЗАДАНИЕ 1
В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/

/*  #include<iostream>
  #include"stdlib.h"
  #include"time.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int ar[10];
    int max = ar[0];
    int min = ar[0];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        ar[i] = rand();
        if (i == 0) {
            min = ar[i];
            max = ar[i];
        }
        if (max < ar[i])
            max = ar[i];
        if (min > ar[i])
            min = ar[i];
    }
    cout << "Максимальное значение  " << max << endl;
    cout << "Минимальное значение  " << min << endl;
 }
 */

 /*ЗАДАНИЕ 2
В одномерном массиве, заполненном случайными числами
в заданном пользователем диапазоне, найти сумму элементов,
значения которых меньше указанного пользователем.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
   setlocale(LC_ALL, "");

   int ar[10] = {};
   int a, b, c;
   int sum = 0;
   srand(time(0));

   cout << "Введите начало диапазона массива " << endl;
   cin >> a;
   cout << "ВВедите конец диапазона массива " << endl;
   cin >> b;
   cout << "Введите значение, до которого будут суммироваться элементы массива " << endl;
   cin >> c;

   for (int i = 0; i < 10; i++)
   {
       ar[i] = a + rand() % (b - a + 1);
       cout << ar[i] << '\t';
   }
   for (int i = 0; i < 10; i++)
   {
       if (ar[i] < c)
           sum = sum + ar[i];
   }
   cout << "\n Сумма элементов: " << sum << endl;
  }      
  */
        /*ЗАДАНИЕ 3
Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 — поиск
между 3-м и 6-м месяцем). Необходимо определить месяц,
в котором прибыль была максимальна и месяц, в котором
прибыль была минимальна с учетом выбранного диапазона.*/

/*#include <iostream>

 using namespace std;

 int main()
  {
    setlocale(LC_ALL, "");
    const char Month[][12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
    int ar[12];
    int a, b;
    int minMonth = 0;
    int maxMonth = 0;

    for (int i = 0; i < 12; i++)
    {
        cout << "Введите прибль фирмы в месяце " << Month[i] << endl;
        cin >> ar[i];
    }
    cout << "Введите диапазон месяцев, среди которых нужно найти минимальный и максимальный от 1 до 12 " << endl;
    cin >> a;
    cin >> b;
    minMonth = a - 1;
    maxMonth = b - 1;
    for (int i = a; i < b-1; i++)
    {
        if (ar[maxMonth] <= ar[i])
            maxMonth = i;
        if (ar[minMonth] >= ar[i])
            minMonth = i;
    }
    cout << "Максимальная прибыль в месяце " << Month[maxMonth] << endl;
    cout << "Минимальная прибыль в месяце " << Month[minMonth] << endl;
  }
  */              


/*
ЗАДАНИЕ 4
В одномерном массиве, состоящем из N вещественных
чисел вычислить:
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и послед-
ним отрицательными элементами.*/

/*#include <iostream>

 using namespace std;

 int main()
 {
   setlocale(LC_ALL, "");
   int ar[10];
   int sum1 = 0;
   int sum2 = 0;
   long long min;
   long long max;
   int minIndex, maxIndex;
   long long A1 = 1;                          //А1- произведение между минимальным и максимальным элементами
   long long A;
   long long B1 = 1;                           //В1- произведение элементов с четными номерами
                                                       

   srand(time(0));
   for (int i = 0; i < 10; i++)
   {
       ar[i] =-15+rand()%25;
       cout << ar[i] << '\t';
   }
   for (int i = 0; i < 10; i++)
   {
       if (ar[i] < 0)
           sum1 += ar[i];
   }
   for (int i = 0; i < 10; i++)
   {
       if (i == 0)
       {
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
       for (int i = minIndex; i < maxIndex; i++)
       {
           A = min * max;
           A1 = A1 * A;
       }
   }
   for (int i = 0; i < 10; i+=2)
   {
       B1=B1*ar[i];
   }
   for (int i = minIndex + 1; i < maxIndex; i++)
   {
       sum2 += ar[i];
   }
   cout << "\n\nСумма отрицательных элементов " << sum1 << endl;
   cout << "Произведение элементов, находящиеся между минимумом и максимумом " << A1 << endl;
   cout << "Произведение элементов с четными номерами " << B1 << endl;
   cout << "Сумма элементов, находящихся между первым и последним отрицательными элементами" << sum2 << endl;
}
*/

 /*Домашнее задание 2
 
ЗАДАНИЕ 1
Пользователь вводит число. Определить количество цифр
в этом числе, посчитать их сумму и среднее арифметическое.
Определить количество нулей в этом числе. Общение с поль-
зователем организовать через меню.*/


/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
     int a, N, cifra;
     double sum = 0;
     double SA=0;
     double Ncifra = 0;
     int Nnull = 0;

     cout << "Введите число " << endl;
     cin >> a;

     do
     {
         cout << "Выберите дейтвия " << endl;
         cout << "1 - опредилить количество цифр в числе " << endl;
         cout << "2 - посчитать сумму цифр " << endl;
         cout << "3 - посчитать среднее арифметическое цифр " << endl;
         cout << "4 - опредилить количество нулей в этом числе" << endl;
         cout << "5 - выход из программы " << endl;
         cin >> N;

         while (a > 0)
         {
             cifra = a % 10;
             sum += cifra;
             Ncifra++;
             if (cifra == 0)
             {
                 Nnull++;
             }
             a = a / 10;
         }
         SA = sum / Ncifra;
         switch(N)
         {
         case 1:
         {
             cout << "Количество цифр в числе \t " << Ncifra << endl;
             break;
         }
         case 2:
         {
             cout << "Сумма цифр в числе \t" << sum << endl;
             break;
         }
         case 3:
         {
             cout << "Среднее арифметическое цифр \t" << SA << endl;
             break;
         }
         case 4:
         {
             cout << "Количество нулей в числе \t" << Nnull << endl;
             break;
         }
         case 5:
         {
             cout << "До скорых встреч!" << endl;
             break;
         }
         }
     } while (N != 5);
 }
 */

 /*ЗАДАНИЕ 2
Написать программу, которая выводит на экран шахматную
доску с заданным размером клеточки. 
Например,
***---***---***---***---
***---***---***---***---
***---***---***---***---
---***---***---***---***
---***---***---***---***
---***---***---***---*** */

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
     int size;

     cout << "Введите размер клетки " << endl;
     cin >> size;

     for (int i = 0; i < 8; i++)
     {
         if (i % 2 == 0)
         {
             for (int n = 0; n < size; n++)
             {
                 for (int j = 0; j < 8; j++)
                 {
                     if (j % 2 == 0)
                     {
                         for (int l = 0; l < size; l++)
                         {
                             cout << "*";
                         }
                     }
                     else
                     {
                         for (int l = 0; l < size; l++)
                         {
                             cout << "0";
                         }
                     }
                 }
                 cout << endl;
             }
         }
         else
         {
             for (int n = 0 ; n < size; n++)
             {
                 for (int j = 0; j < 8; j++)
                 {
                     if (j % 2 == 0)
                     {
                         for (int l = 0; l < size; l++)
                         {
                             cout << "0";
                         }
                     }
                     else
                     {
                         for (int l = 0; l < size; l++)
                         {
                             cout << "*";
                         }
                     }
                 }
                 cout << endl;
             }
         }
     }
}
*/

 /*ЗАДАНИЕ 3
Реализовать программу расчета заказа в кафетерии
при условии, что заказ может быть на несколько человек и
каждый клиент формирует свою часть заказа. Необходимо
спросить у пользователя на сколько человек заказ. Далее
каждому человеку выводиться меню (названия напитков,
кондитерских изделий и их цена) и он выбирает. Предусмот-
реть возможность выбора нескольких элементов меню для
клиента, если он желает добавить еще что-то в свой заказ.
Результат работы программы — итоговая сумма общего
заказа всей компании*/

/*#include <iostream>
  #include "windows.h"

 using namespace std;
 
 int main()
 {
     setlocale(LC_ALL, "");
     system("cls");
     int a, menu;
     int sum = 0;

     cout << "Добро пожаловать!" << endl;
     cout << "На какое количество человек вы хотите совершить заказ?" << endl;
     cin >> a;
     do
     {
         cout << "Выберите позиции нашего меню:" << endl;
         cout << "1-торт Наполеон  30 грн" << endl;
         cout << "2-торт Прага    40 грн" << endl;
         cout << "3-эклер   15 грн" << endl;
         cout << "4-печенье домашнее  5 грн" << endl;
         cout << "5- чай черный  5 грн" << endl;
         cout << "6- кофе   7 грн" << endl;
         cout << "7- компот 3 грн" << endl;
         cout << "8-заказ следующего гостя" << endl;
         cout << "9- посчитать общую сумму заказа" << endl;
         cin >> menu;
         switch (menu)
         {
         case 1:
             {
                 cout << "Вы выбрали торт Наполеон. Для завершения вашего заказа введите цифру 8" << endl;
                 sum += 30;
                 cout << endl;
                 break;
             }
         case 2:
             {
                 cout << "Вы выбрали торт Прага.Для завершения вашего заказа введите цифру 8" << endl;
                 sum += 40;
                 cout << endl;
                 break;
             }
         case 3:
             {
                 cout << "Вы выбрали эклер. Для завершения вашего заказа введите цифру 8" << endl;
                 sum += 15;
                 cout << endl;
                 break;
             }
         case 4:
             {
                 cout << "Вы выбрали домашнее печенье. Для завершения вашего заказа введите цифру 8" << endl;
                 sum += 5;
                 cout << endl;
                 break;
             }
         case 5:
             {
             cout << "Вы выбрали черный чай. Для завершения вашего заказа введите цифру 8" << endl;
             sum += 5;
             cout << endl;
             break;
             }
         case 6:
            {
             cout << "Вы выбрали кофе. Для завершения вашего заказа введите цифру 8" << endl;
             sum += 7;
             cout << endl;
             break;
            }
         case 7:
            {
             cout << "Вы выбрали компот. Для завершения вашего заказа введите цифру 8" << endl;
             sum += 3;
             cout << endl;
             break;
            }
         case 8:
            {
             cout << "Ожидаю заказ следующего гостя" << endl;
             break;
            }
         case 9:
            {
             cout << "\nОбщая сумма заказа   " << sum << endl;
             break;
            }
         default:
             cout << "Неверный ввод!" << endl;
         }
     } while (menu != 9);
}
*/
 

 /*ЗАДАНИЕ 4
Есть пустое поле игры «Морской бой».
Вывести в консоль номера полей игры:
A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
.....
A9 B9 C9 D9 E9 F9 G9 H9 I9 J9*/

/*#include <iostream>

 using namespace std;

 int main()
 {
     setlocale(LC_ALL, "");
    for (int i = 0; i < 10; i++)
     {
         for (char j = 'A'; j <='J'; j++)
         {
             cout << (char)j << i <<" ";
         }
         cout << endl;
     }
 }
 */


