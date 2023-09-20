/*����������� ����� "����������� �����". ��������� ����� �������������� ����������� + � * ��� �������� � ��������� ����������� �����.
����������� �������� << ��� ������ �� ����� ������������ �����.*/


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
    // ��������� ���������� ������������ �����
    void Set(double re, double im = 0.);

    // �������� ���������
    Complex operator*(const Complex& other) const;
    //
    Complex operator+(const Complex& other) const;
    // ����/����� ������������ �����
    friend ostream& operator<< (ostream& out, const Complex& x);
    friend istream& operator>> (istream& out, Complex& x);

};
// ��������� ������������ ����� ������������ ����� 
inline double Complex::GetRe() const
{
    return m_re;
}
// ��������� ������ ����� ������������ �����
inline double Complex::GetIm() const
{
    return m_im;
}
// ��������� ���������� ������������ �����
inline void Complex::Set(double re, double im)
{
    m_re = re;
    m_im = im;
}
// ����������� �� ���������
Complex::Complex()
    : m_re(0.)
    , m_im(0.)
{
}
// ������ �����������
Complex::Complex(double re, double im)
    : m_re(re)
    , m_im(im)
{
}
// ����������� �����������
Complex::Complex(const Complex& x)
    : m_re(x.m_re)
    , m_im(x.m_im)
{
}
//�������� ���������
Complex Complex::operator*(const Complex& other) const
{
    return Complex(m_re * other.m_re - m_im * other.m_im,
        m_re * other.m_im - m_im * other.m_re);
}
//�������� ��������
Complex Complex:: operator+(const Complex& other) const
{
    return Complex(m_re + other.m_re, m_im+ other.m_im);
}
// ���� ������������ ����� 
istream& operator>> (istream& in, Complex& x)
{
    return (in >> x.m_re >> x.m_im);
}
// ����� ������������ ����� �� �����
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
    cout << "������������ ���� ����������� �����  x * y =" << res1 << endl;

    res1 = x + y;           
    cout << "����� ���� ����������� �����  x + y =" << res1 << endl;
}

*/