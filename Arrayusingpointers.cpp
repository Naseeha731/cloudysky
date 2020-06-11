#include<iostream>
using namespace std;
int main()
{
int array[5];
cout<<"enter elements:";
for(i=0;i<5;i++)
cin>>array[i];
cout<<"you entered:";
for(i=0;i<5;i++)
cout<<*(array+i)<<endl;
return 0;
}

