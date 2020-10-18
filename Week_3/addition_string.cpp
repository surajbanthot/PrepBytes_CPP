#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        //which length is more
        if (str1.length() > str2.length())
            swap(str1, str2);
        int n1 = str1.length();
        int n2 = str2.length();
        //Reverse function
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        //Addition
        int carry = 0;
        string result;
        for (int i = 0; i < n1; i++)
        {
            int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        for (int i = n1; i < n2; i++)
        {
            int sum = ((str2[i] - '0') + carry);
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        if (carry)
        {
            result.push_back(carry + '0');
        }

        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}