#include <iostream>
using namespace std;

class Complex
{
private:
    int real1, imag1, real2, imag2;
    int addreal, addimag, subreal, subimag;

public:

    void input()
    {
        cout << "First Complex Number: ";
        cin >> real1 >> imag1;

        cout << "Second Complex Number: ";
        cin >> real2 >> imag2;
    }

    void add()
    {
        addreal = real1 + real2;
        addimag = imag1 + imag2;
    }

    void sub()
    {
        subreal = real1 - real2;
        subimag = imag1 - imag2;
    }

    void display()
    {
        cout << "Addition = " << addreal;

        if (addimag >= 0)
            cout << " + " << addimag << "i";
        else
            cout << " - " << -addimag << "i";

        cout << "\nSubtraction = " << subreal;

        if (subimag >= 0)
            cout << " + " << subimag << "i";
        else
            cout << " - " << -subimag << "i";
    }
};

int main()
{
    Complex c;

    c.input();
    c.add();
    c.sub();
    c.display();

    return 0;
}