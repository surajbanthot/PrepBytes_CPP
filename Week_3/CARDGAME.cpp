#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 1;
        char deck_card[2];
        for (int i = 0; i < 2; i++)
            cin >> deck_card[i];
        char in_card[10];
        for (int i = 0; i < 10; i++)
            cin >> in_card[i];
        for (int i = 0; i < 10; i++)
            if (in_card[i] == deck_card[0] || in_card[i] == deck_card[1])
            {
                cout << "YES\n";
                flag = 0;
                break;
            }
            if (flag == 1)
            {
                cout << "NO\n";
            }
    }
    return 0;
}