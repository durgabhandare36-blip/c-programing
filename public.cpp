#include <iostream>
using namespace std;

class student
{
public:
    float a, b, addition, subtraction;

    // Constructor
    student()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        addition = a + b;
    }

    void sub()
    {
        subtraction = a - b;
    }

    void print()
    {
        cout << "Addition = " << addition << endl;
        cout << "Subtraction = " << subtraction << endl;
    }
};

int main()
{
    student s;
    s.add();
    s.sub();
    s.print();

    return 0;
}
