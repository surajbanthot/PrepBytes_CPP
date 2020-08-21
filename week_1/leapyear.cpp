#include <iostream>
using namespace std;

int main()
{
    int testcases, year;
    cin >> testcases;
    while (testcases--)
    {
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }

        cout << "\n";
    }
    return 0;
}