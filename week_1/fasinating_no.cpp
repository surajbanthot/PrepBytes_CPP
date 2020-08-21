// PrepBuddy find any four digit number fascinating that has all the 4  digits unique. For example 
// 1234 is a fascinating number. His friend Rahul gave him N numbers and asks him to find the minimum number which is strictly larger than the given one and has only distinct digits.



#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n = 0;
        cin >> n;
        n = n + 1;
        while (true)
        {
            int a = (n / 1) % 10;
            int b = (n / 10) % 10;
            int c = (n / 100) % 10;
            int d = (n / 1000) % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d)
            {
                break;
            }
            else
            {
                n = n + 1;
            }
        }
        cout << n << "\n";
    }
    return 0;
}