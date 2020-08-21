// // program to find the favourite number in the given integer.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int testcases,value;
//      int n;
//     cout<<"Enter the number of testcases\n";
//     cin >> testcases;
//     cout << "Enter the integer which needs to be searched\n";
//     cin >> value; //here value is the integer which we will use to search in the given integer
//     while (testcases--)
//     {
//         cout << "Enter the integer\n";
//         cin >> n;
//         int rem=0,count=0;
//         while (n != 0)
//         {
//             rem = n % 10;
//             if (rem == value)
//                 count++;
//             n = n / 10;
//         }
//         cout << count << "\n";
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int testcases, no = 5, number, rem;
    cin >> testcases;
    while (testcases--)
    {
        cin >> number;
        if (number == 0)
        {
            cout << "0\n";
        }
        else
        {
            int count=0;
            while (number != 0)
            {
                rem = number % 10;
                if (rem == no)
                    count++;
                number = number / 10;
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}