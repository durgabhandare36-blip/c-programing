#include<iostream>
using namespace std;
int main()
{
int n,i,r,sum=0;
cout<<"enter n:";
cin>>n;
i=n;
while(n>0)
{
r=n%10;
sum=sum=(r*r*r);
n=n/10;
}
if(i==sum)
cout<<"armstrong number";
else
cout<<"not an armstrong number";
}
