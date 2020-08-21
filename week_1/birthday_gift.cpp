// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aman-and-his-birthday-gift-b5268b97/description/

#include <iostream>
using namespace std;

int main()
{
    int testcases, a, b, c;
    cin >> testcases;
    while (testcases--)
    {
        cin >> a >> b >> c;
       if(a==b)
       cout<<"YES"<<endl;
       else if((a>b)&&c>0)
       cout<<"NO"<<endl;
       else if((a<b)&&(c<0))
       cout<<"NO"<<endl;
       else if(c==0)
       cout<<"NO"<<endl;
       else if((a>b)&&(((a-b)%c)==0))  
       cout<<"YES"<<endl;
       else if((a<b)&&(((b-a)%c)==0))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
             
    }
    return 0;
}
