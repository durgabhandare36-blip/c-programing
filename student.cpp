#include<iostream>
using namespace std;
class student
{
public:
string name;
int roll_no;
float marks;

void input()
{
roll_no=07;
marks=98;
name="Srushti";
}
void display()
{
cout<<"name: "<<name<<endl;
cout<<"roll_n0: "<<roll_no<<endl;
cout<<"marks: "<<marks;
}
};
int main()
{
student s;
s.input();
s.display();
return 0;
}

