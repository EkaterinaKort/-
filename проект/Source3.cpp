#include <iostream>
#include <cstdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    int ar[10];
    int max = ar[0];
    int min = ar[0];

    for (int i = 1; i < 10; i++)
    {
        ar[i] = srand();
        if (max < ar[0])
            max = ar[i];
        if (min > ar[i])
            min = ar[i];
    }
    cout << "Максимальное значение  " << max << endl;
    cout << "Минимальное значение  " << min << endl;
}