#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        cin>>arr[i];
        long long total=((long long)n*(n+1))/2;
        long long sum=0;
        for(int i=0;i<n-1;i++)
        sum+=arr[i];
        cout<<total-sum<<"\n";
    }
    return 0;
}
