#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number:";
  cin>>n;
  switch(n)
  {
    case 1:
      cout<<"One";
    case 2:
      cout<<"Two";
      break;
    case 3:
      cout<<"Three";
      break;
   default:
     cout<<"Invalid";
  }
}

