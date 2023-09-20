/*#include<iostream>

using namespace std;

class Student
{
    char* name;
    int age;
    
public:
    
    Student() // construct by default
    {
        //cout << "Constructor by default\n";
        name = nullptr;
        age = 0;
    }
    Student(const char* Name, int Age) // construct by 2 param
    {
        cout << "Constructor with parameters\n";
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
        age = Age;
    }
    void SetName()
    {
        name = new char[20];
        cout << "¬ведите им€ студента " << endl;
        cin>>name;
    }
    char* GetName()
    {
        return name;
    }
    void SetAge()
    {
        cout << "¬ведите возраст студента  " << endl;
        cin >> age;
    }
    int GetAge()
    {
        return age;
    }
    void SetName(const char* Name)
    {
      
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
    }
    void SetAge(int Age)
    {
        age = Age;
    }
    void Output()
    {
        if (name == nullptr)
        {
            cout << "Empty object!\n";
            return;
        }
        cout << "Name: " << name << endl
            << "Age: " << age << endl << endl;
    }
    ~Student()
    {
        cout << "Destruct\n";
        delete[] name;
    }
};
void print(Student* arr, int count)
{

    for (int i = 0; i < count; i++)
        arr[i].Output();
}
void print1(Student* arr, int count)
{

    for (int i = 0; i < count; i++)
    {
        arr[i].SetName();
        arr[i].SetAge();
    }
}
Student* Insert(Student* arr, int count)
{
    Student* temp = new Student[count];
    for (int i = 0; i < count; i++)
    {
        temp[i].SetName(arr[i].GetName());
        temp[i].SetAge(arr[i].GetAge());
    }
    delete[]arr;
    arr = new Student[count+1];
    for (int i = 0; i < count; i++)
    {
        arr[i].SetName(temp[i].GetName());
        arr[i].SetAge(temp[i].GetAge());
    }
    arr[count].SetName();
    arr[count].SetAge();
    return arr;
}
int main()
{
    setlocale(LC_ALL, "rus");
    Student obj;
    
    Student* arr = new Student[3];
    //arr[0] = {"www", 15};
    //arr[1] = { "xxx", 25 };
    //arr[2] = { "aaaa", 35 }; 

    print1(arr, 3);
    print(arr, 3);
    arr=Insert(arr, 3);
    print(arr, 4);

    delete[]arr;

}
*/

/*ѕрактика: добавить в класс Digit перегрузку операторов += и ++*/

/*#include <iostream>
using namespace std;

class Digit {
private:
    int dig; //число
public:
    Digit() 
    {
        dig = 0;
    }
    Digit(int iDig) 
    {
        dig = iDig;
    }
    void Show() 
    {
        cout << dig << "\n";
    }
    Digit operator+(const Digit& N)
    {
        Digit temp;
        temp.dig = dig + N.dig;
        return temp;
    }
    Digit operator-(const Digit& N)
    {
        Digit temp;
        temp.dig = dig - N.dig;
        return temp;
    }
    Digit operator*(const Digit& N)
    {
        Digit temp;
        temp.dig = dig * N.dig;
        return temp;
    }
    Digit operator+=(const Digit& N)
    {
       
        dig = dig += N.dig;
        return *this;
    }
    Digit operator++()
    {
        dig = dig ++;
        return *this;
    }
};
void main()
{
    //провер€ем работу операторов 
    Digit A(8), B(3);
    Digit C;
    cout << "\Digit A:\n";
    A.Show();
    cout << "\Digit B:\n";
    B.Show();
    cout << "\noperator+:\n";
    C = A + B;
    C.Show();
    cout << "\noperator-:\n";
    C = A - B;
    C.Show();
    cout << "\noperator*:\n";
    C = A * B;
    C.Show();


    cout << "\noperator +=:\n";
    A += B;
    A.Show();

    cout << "\noperator ++:\n";
    ++C;
    C.Show();
}
*/
