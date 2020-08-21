//  You are given a number n ￼ and you are asked to make n ￼ divisible by 10 ￼. The only operation you can do on n ￼ is to multiply n ￼ by 2 ￼. Given n ￼ find out how many operations are required to make n ￼ divisible by 10


#include <iostream>
using namespace std;

int main()
{
    int testcases, n;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        if ((n % 10) == 0)
        {
            cout << "0" << "\n";
        }
        else if ((n % 10) != 0 && (n % 5) == 0)
        {
            cout << "1"<<"\n";
        }
        else
        {
            cout << "-1"<<"\n";
        }
    }
    return 0;
}