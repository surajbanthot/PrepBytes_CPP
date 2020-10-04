#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int index=-1,n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            index=i; 
        }
        cout<<index<<" ";
    }
    return 0;
}