#include<iostream>
using namespace std;
bool checkprime(int a)
{
int i;
bool isprime=true;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
isprime=false;
break;
}
}
return isprime;
}
bool checkprime(int a)
int main()
{
int a,i;
bool flag=false;
cout<<"enter the number:";
cin>>a;
for(i=2;i<=a/2;i++)
{
if(checkprime(i))
{
if(chcekprime(a-i))
{
cout<<a<<"="<<i<<"+"<<n-i<<endl;
flag=true;
}
}
}
if(!flag)
cout<<a<<"not to sum";
return 0;
}
