#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "PrepBuddy";
    string s2 = "Byteses";
    string s3 = "RFunction";
    string s4;

    // s4 = s1;
    // string::iterator sit;
    // cout<<"String using begin() and end()"<<endl;

    // for(sit=s1.begin(); sit!=s1.end();sit++)
    // cout<<*sit;
    // cout<<endl;

    // string:: reverse_iterator rsit;
    // cout<<"string using rbegin() and rend()"<<endl;

    // for(rsit=s1.rbegin();rsit!=s1.rend();rsit++)
    // cout<<*rsit;
    // cout<<endl;

    // char ch[8];
    // s1.copy(ch,5,2);
    // cout<<ch<<endl;
    // cout << s1 << endl;
    // s1.swap(s3);
    // cout << s1 << endl;


    cout<<"First Occurence of es in s2"<<endl;
    cout<<s2.find("es")<<endl;
    cout<<"last occurence of is in s2 "<<s2.rfind("es")<<endl;

    cout<<s2.find_first_of("es")<<endl;

    s2.insert(3, "Prep");
    cout<<s2<<endl;

    s2.clear();
    if(s2.empty())
    cout<<"String is empty\n";

    

    return 0;
}