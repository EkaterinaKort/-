/*Реализовать класс "Комплексное число". Наполните класс перегруженными операторами + и * для сложения и умножения комплексных чисел.
Перегрузите оператор << для вывода на экран комплексного числа.*/


/*#define COMPLEX_H 

#include <iostream>
using namespace std;

class Complex
{
private:
    double m_re, m_im;

public:
 
    Complex();
    Complex(double re, double im = 0);
    Complex(const Complex& other);

    double GetRe() const;
    double GetIm() const;
    // изменение параметров комплексного числа
    void Set(double re, double im = 0.);

    // оператор умножения
    Complex operator*(const Complex& other) const;
    //
    Complex operator+(const Complex& other) const;
    // ввод/вывод комплексного числа
    friend ostream& operator<< (ostream& out, const Complex& x);
    friend istream& operator>> (istream& out, Complex& x);

};
// получение вещественной части комплексного числа 
inline double Complex::GetRe() const
{
    return m_re;
}
// получение мнимой части комплексного числа
inline double Complex::GetIm() const
{
    return m_im;
}
// изменение параметров комплексного числа
inline void Complex::Set(double re, double im)
{
    m_re = re;
    m_im = im;
}
// конструктор по умолчанию
Complex::Complex()
    : m_re(0.)
    , m_im(0.)
{
}
// полный конструктор
Complex::Complex(double re, double im)
    : m_re(re)
    , m_im(im)
{
}
// конструктор копирования
Complex::Complex(const Complex& x)
    : m_re(x.m_re)
    , m_im(x.m_im)
{
}
//оператор умножения
Complex Complex::operator*(const Complex& other) const
{
    return Complex(m_re * other.m_re - m_im * other.m_im,
        m_re * other.m_im - m_im * other.m_re);
}
//оператор сложения
Complex Complex:: operator+(const Complex& other) const
{
    return Complex(m_re + other.m_re, m_im+ other.m_im);
}
// ввод комплексного числа 
istream& operator>> (istream& in, Complex& x)
{
    return (in >> x.m_re >> x.m_im);
}
// вывод комплексного числа на экран
ostream& operator << (ostream& out, const Complex& x)
{
    return (out << "(" << x.m_re << "," << x.m_im << ")");
}
void main()
{
    setlocale(LC_ALL, "rus");

    Complex x(10, 15), y(22, 24), res1, res2, res3;
    Complex x1;
 
    res1 = x * y;            
    cout << "Произведение двух комплексных чисел  x * y =" << res1 << endl;

    res1 = x + y;           
    cout << "Сумма двух комплексных чисел  x + y =" << res1 << endl;
}

*/