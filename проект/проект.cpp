/* вывести на экран фигуры, заполненные звездочками. Диалог с пользователем реализовать при помощи меню. */

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int figure, i, j;
    const int N = 13;
    do {
        cout << "Выберите вариант фигуры  " << endl;
        cout << "1- а" << endl;
        cout << "2- б" << endl;
        cout << "3- в" << endl;
        cout << "4- г" << endl;
        cout << "5- д" << endl;
        cout << "6- е" << endl;
        cout << "7- ж" << endl;
        cout << "8- з" << endl;
        cout << "9- и" << endl;
        cout << "10- к" << endl;
        cout << "11-q" << endl;
        cin >> figure;
        switch (figure)
        {
        case 1:                                                 
        {
            cout << "Вы выбрали вариант а" << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i <= j)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 2:                                                 
        {
            cout << "Вы выбрали вариант б " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i >= j)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 3:                                                      
        {
            cout << "Вы выбрали вариант в " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i <= j && i + j <= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 4:                                                  
        {
            cout << "Вы выбрали вариант г " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i >= j && i + j >= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 5:                                                        
        {
            cout << "Вы выбрали вариант Д " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i <= j && i + j <= N - 1 )
                        cout << "*";
                    else
                        cout << " ";
                    if (i >= j && i + j >= N - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
                
            }
            break;
        }
        case 6:
        {
            cout << "Вы выбрали вариант Е " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i >= j && i + j <= N - 1)
                        cout << "*";
                    else
                        cout << " ";
                    if (i <= j && i + j >= N - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
            break;
        }
        case 7:                                                        
        {
            cout << "Вы выбрали вариант ж " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i >= j && i + j <= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 8:                                                        
        {
            cout << "Вы выбрали вариант З " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i <= j && i + j >= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 9:                                                        
        {
            cout << "Вы выбрали вариант И " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i + j <= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 10:                                                        
        {
            cout << "Вы выбрали вариант К " << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i + j >= N - 1)
                        cout << " * ";
                    else
                        cout << "   ";
                }
                cout << endl;
            }
            break;
        }
        case 11:
        {
            cout << "Хорошего дня" << endl;
            break;
        }
        default:
            cout << "Неверный ввод!" << endl;
        }
    }
     while (figure != 11);
     return 0;
}
*/
