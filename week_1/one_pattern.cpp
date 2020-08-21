// Print in the output the exact pattern provided below
// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1

#include<iostream>
using namespace std;
int main()
{
    int row=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i>=j)
            cout<<" 1";
        }
        cout<<"\n";
    }
    return 0;
}