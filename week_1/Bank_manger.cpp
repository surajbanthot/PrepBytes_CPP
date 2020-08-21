#include <iostream>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    if (testcases >= 1 && testcases <= 10)
    {
        while (testcases--)
        {
            long long int number;
            cin >> number;
            if (number >= 0 && number <= 1000000000)
            {
                int result = 0;
                for (int i = 2; i <= number; i++)
                {
                    while (number % i == 0)
                    {
                        result += i;
                        number = number / i;
                    }
                }
                cout << result << "\n";
            }
        }
    }
    return 0;
}

