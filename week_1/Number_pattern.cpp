// Print in the output the exact pattern provided below
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
    for(int i=0;i<5;i++)
    {
        int count=0;
        for(int j=0;j<5;j++)
        {
            if(i<=j)
            {
                count++;
                cout<<count<<" ";
            }
        }
        cout<<"\n";
    }
    }else
    {
        cout<<" ";
    }
    
    return 0;
}