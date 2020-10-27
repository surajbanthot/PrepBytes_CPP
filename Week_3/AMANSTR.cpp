#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int str_len = s.length()-4;
        string temp;
        int result=0;
        int p=0;
        for (int i = 0; i <= str_len; i++)
        {
            temp = s.substr(i, 4);
            if (temp == "aman")
            {
                result = result + (i - p + 1) * (s.length() - (i + 3));
                p = i + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}