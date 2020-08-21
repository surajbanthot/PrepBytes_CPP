#include <iostream>
using namespace std;
int main()
{
    int testcases, n;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        int temp = (n % 8);
        switch (temp)
        {
        case 0:
            cout << n - 1 << "SL\n";
            break;
        case 1:
            cout << n + 3 << "LB\n";
            break;
        case 2:
            cout << n + 3 << "MB\n";
            break;
        case 3:
            cout << n + 3 << "UB\n";
            break;
        case 4:
            cout << n - 3 << "LB\n";
            break;
        case 5:
            cout << n - 3 << "MB\n";
            break;
        case 6:
            cout << n - 3 << "UB\n";
            break;
        case 7:
            cout << n + 1 << "SU\n";
        default:
            cout << "\n";
            break;
        }
    }
    return 0;
}