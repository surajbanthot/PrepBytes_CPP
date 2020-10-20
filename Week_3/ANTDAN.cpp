#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,adi=0, dani=0;
        cin>>n;
        char arr[10000000];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='A')adi++;
            if(arr[i]=='D')dani++;
        }
        if(adi>dani)
        cout<<"Aditya"<<endl;
        else if(dani>adi)
        cout<<"Danish"<<endl;
        else
        cout<<"AdiDan"<<endl;    
    }
    return 0;
}