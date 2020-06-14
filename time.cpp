#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
 int sec;
 int hh,mm,ss;
 public:
   void getTime(void);
   void convertintoseconds(void);
   void putTime(void);
   };
 void Time::getTime(void)
   {
   cout<<"enter time"<<endl;
   cout<<"hours";
   cin>>hh;
   cout<<"minutes";
   cin>>mm;
   cout<<"seconds";
   cin>>ss;
   }
void Time::convertintoseconds(void)
  {
  sec=hh*3600+mm*60+ss;
  }
void Time::putTime(void)
{
cout<<"the time is"<<setw(2)<<setfill('0')<<hh<<":";
cout<<"the time is"<<setw(2)<<setfill('0')<<mm<<":";
cout<<"the time is"<<setw(2)<<setfill('0')<<ss<<endl;
cout<<"time in total seconds:"<<sec;
}
int main()
{
Time t;
t.getTime();
t.convertintoseconds();
t.putTime();
return 0;
}

   
