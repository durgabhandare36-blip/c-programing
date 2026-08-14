#include <iostream>
using namespace std;

class Complex
{
 private:
    int real, imag;

 public:
    void input()
    {
        cin >> real >> imag;
    }

    void add(Complex c)
    {
        real = real + c.real;
        imag = imag + c.imag;
    }

    void sub(Complex c)
    {
        real = real - c.real;
        imag = imag - c.imag;
    }

    void display()
    {
        cout << real;
        if(imag>=0)
        cout<<"+"<<imag<<"i";
        else
        cout<<"-"<<-imag<<"i";
    }
};

int main()
{
    Complex c1, c2, a, s;

    cout << "First Complex Number: ";
    c1.input();

    cout << "Second Complex Number: ";
    c2.input();

    a = c1;
    a.add(c2);

    s = c1;
    s.sub(c2);

    cout << "Addition = ";
    a.display();

    cout << "\nSubtraction = ";
    s.display();

}