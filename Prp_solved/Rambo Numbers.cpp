//Rambo Numbers 
//prepbytes
//Ankit Surwade
//https://mycode.prepbytes.com/problems/maths/RMBNUM

#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
    long long r,p,q,i;
    long long x=0,y=0;
    cin>>r>>p>>q;

    long long new_p=p%r==0 ? p : p+((r-p%r)%r);
    long long new_q=q%r==0? q: q-((q%r+r)%r);
    //cout<<new_p<<" "<<new_q;
    cout<<(new_q - new_p)/r + 1<<endl;
}
    return 0;
}
