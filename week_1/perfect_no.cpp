#include<iostream>
using namespace std;

int main()
{
    int n,testcases;
    cin>>testcases;
    while(testcases--)
    {
    cin>>n;
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"true"<<"\n";
    }else
    {
        cout<<"false"<<"\n";
    }
    
    }


    return 0;
}