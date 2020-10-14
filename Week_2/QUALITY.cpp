#include <bits/stdc++.h>
using namespace std;
  int main()
  {
    long n;
    cin>>n;
    long b[n];
    for(long i=0;i<n;i++)
      cin>>b[i];
    long long  sum= abs(b[0]); 
    long long diff=0;
    for(long i=1;i<n;i++)
    { 
      diff=abs(b[i]-b[i-1]);
      sum=sum+diff;
    }
    cout<<sum<<endl;
    return 0;
  }