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
        int vow = 0, cons = 0;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vow++;
            else
                cons++;
        }
        cout << vow <<" "<< cons << endl;
    }
    return 0;
}