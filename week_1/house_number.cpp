// #include <iostream>
// using namespace std;
// int main()
// {
//     long long int testcases;

//      long long int n;
//     cin >> testcases;
//     while (testcases--)
//     {
//         cin >> n;
//         long long int count = 0;
//         for ( long long int i = 1; i <= n; i++)
//         {
//             ((i%10)==0)?count+=2:((i>10)?count+=2:count+=1);
//         }
//         cout << count << "\n";
//     }
//     return 0;
// }

// Hello world
// git vcommit check

#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    if (testcases >= 1 && testcases <= 23)
    {
        while (testcases--)
        {
            long long int number, count = 0, temp, result;
            cin >> number;
            temp = number;
            if (number >= 1 && number <= 1000000000)
            {
                do
                {
                    count++;
                    number = number / 10;
                } while (number != 0);
                number = temp;
                if (count == 1)
                {
                    cout << number << "\n";
                }
                else if (count == 2)
                {
                    result = 9 + (number - 9) * 2;
                    cout << result << "\n";
                }
                else if (count == 3)
                {
                    result = 189 + (number - 99) * 3;
                    cout << result << "\n";
                }
                else if (count == 4)
                {
                    result = 2889 + (number - 999) * 4;
                    cout << result << "\n";
                }
                else if (count == 5)
                {
                    result = 38889 + (number - 9999) * 5;
                    cout << result << "\n";
                }
                else if (count == 6)
                {
                    result = 488889 + (number - 99999) * 6;
                    cout << result << "\n";
                }
                else if (count == 7)
                {
                    result = 5888889 + (number - 999999) * 7;
                    cout << result << "\n";
                }
                else if (count == 8)
                {
                    result = 68888889 + (number - 9999999) * 8;
                    cout << result << "\n";
                }
                else if (count == 9)
                {
                    result = 788888889 + (number - 99999999) * 9;
                    cout << result << "\n";
                }
                else if (count == 10)
                {
                    result = 8888888889 + (number - 999999999) * 10;
                    cout << result << "\n";
                }
            }
        }
    }
    return 0;
}