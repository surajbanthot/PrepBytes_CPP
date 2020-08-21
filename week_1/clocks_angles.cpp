// clocks and angles 
// PrepBuddy has an analog clock which consists of two hands one for hour and another for minute. She ?// wants to calculate the shorter angle formed between hour and minute hand at any given time.
// 1 hour = 30degree
// 1 min = 6 degree

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int testcases, hourhand, minutehand,finalangle;
 cin>>testcases;
 while(testcases--)
 {
     cin>>hourhand>>minutehand;
     hourhand=(hourhand*30)+(minutehand*(0.5));
     minutehand = minutehand*6;
     finalangle=std::abs(hourhand-minutehand);
     finalangle=(finalangle>180)?(360-finalangle):finalangle;
     cout<<finalangle<<"\n";
 }
    return 0;
}