#include<iostream>
using namespace std;
int main()
{
    int number,rem=0, sum=0;
    cin>>number;
    while(number!=0)
    {
    rem=number%10;
    sum=sum+rem;
    number=number/10;
    }
    cout<<sum<<"\n";
    return 0;
}