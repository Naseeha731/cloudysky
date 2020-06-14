#include<iostream>
using namespace std;
bool checkprime(int r)
{
int i;
bool isprime=true;
for(i=2;i<=r/2;i++)
{
if(r%i==0)
{
isprime=false;
break;
}
}
return isprime;
}
bool checkprime(int r)
int main()
{
int r,i;
bool flag=false;
cout<<"enter the number:";
cin>>r;
for(i=2;i<=r/2;i++)
{
if(checkprime(i))
{
if(chcekprime(r-i))
{
cout<<r<<"="<<i<<"+"<<r-i<<endl;
flag=true;
}
}
}
if(!flag)
cout<<r<<"not to sum";
return 0;
}
