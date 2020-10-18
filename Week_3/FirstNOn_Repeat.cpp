#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int freq[26] = {0};
        int flag=0;
        for (int i = 0; i < str.length(); i++)
        {
            freq[str[i] - 97]++;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (freq[str[i] - 97] == 1)
            {
                flag=1;
                cout << str[i] << endl;
                break;
            }
        }
        if(flag==0)
        cout<<-1<<endl;
    }
    return 0;
}