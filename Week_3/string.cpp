#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="Prep";
    string s2 ="Bytes";
    string s3 = "RFunction";
    string s4;

    s4=s1;
    // string::iterator sit;
    // cout<<"String using begin() and end()"<<endl;

    // for(sit=s1.begin(); sit!=s1.end();sit++)
    // cout<<*sit;
    // cout<<endl;

    string:: reverse_iterator rsit;
    cout<<"string using rbegin() and rend()"<<endl;

    for(rsit=s1.rbegin();rsit!=s1.rend();rsit++)
    cout<<*rsit;
    cout<<endl;

    return 0;
}