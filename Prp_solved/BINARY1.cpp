/* Arnab is given a number n
you have to help arnab print all the binary numbers of length n with no consecutive 1 in leiographical order

input format:
first line contains integer  t, denoting number of testcases.
for each testcases
an integer , the value of n

output format:
for each testcase print all the possible numbers in a new line

constraints:
1 <=t<=5
1<=n<=7
example:
input:
1
3
output:
000
010
100
101

 */

#include<bits/stdc++.h>
using namespace std;

void printBinary(int a[], int k, int n)
{
    if(k==n){
        for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
        return;
    }

    if(a[k-1]==0)
    {
        a[k] =0;
        printBinary(a, k+1,n);
        a[k]=1;
        printBinary(a, k+1, n);
    }else{
        a[k] =0;
        printBinary(a,k+1,n);
    }
}

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        a[0]=0;
        printBinary(a, 1,n);
        a[0]=1;
        printBinary(a, 1, n);
    }
}