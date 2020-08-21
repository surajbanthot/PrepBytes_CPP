// to reverse the given number
#include<iostream>
using namespace std;
int main()
{
    int number;
    int rem=0,reverse=0;
    cin>>number;
    while(number!=0)
    {
            rem=number%10;
            reverse=reverse*10+rem;
            number=number/10;
    }
    cout<<reverse<<"\n";
    return 0;
}