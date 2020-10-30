#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string O, F;
        cin >> O >> F;
        string dup;
        dup = F;
        std::rotate(F.begin(), F.begin() + 2, F.end());
        if (F == O)
        {
            cout << "Yes\n";
        }
        else
        {
            std::rotate(dup.rbegin(), dup.rbegin() + 2, dup.rend());
            if (dup == O)
            cout<<"Yes\n";
            else
            cout<<"No\n";

        }
    }
    return 0;
}