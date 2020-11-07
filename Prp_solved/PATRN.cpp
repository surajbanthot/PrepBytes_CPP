#include<bits/stdc++.h>
using namespace std;

void printNum(int n)
{
    cout<<n<<" ";
    if(n<=0)
    return;
    printNum(n-5);
    cout<<n<<" ";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        printNum(n);
        cout<<endl;

    }
    return 0;
}