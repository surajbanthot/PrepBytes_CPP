#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char temp;
    int i, j;
    int n=s.size();
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(s[i]<s[j])
          {
              temp=s[i];
              s[i]=s[j];
              s[j]=temp;
          }
      }
    }
    cout<<s<<endl;
}
    return 0;
}