#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    if (testcases >= 1 && testcases <= 500)
    {
        while (testcases--)
        {
            long long number;
            long long sum = 1, pow = 3;
            
            cin >> number;
            
            while (sum < number)
            {
                sum += pow;
                pow *= 3;
            }
            while (pow > 0)
            {
                if (sum - pow >= number)
                    sum -= pow;
                pow /= 3;
            }
            cout << sum << "\n";
        }
    }
    return 0;
}