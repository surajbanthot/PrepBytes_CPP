#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
    cout<<x<<" is smaller than "<<y;
    }else if (x>y)
    {
        cout<<x<<" is greater than "<<y;
    }else
    {
        cout<<x<<" is equal to "<<y;
    }
    
    
    return 0;
}