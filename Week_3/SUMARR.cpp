#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
            cin >> str[i];
        string max = str[0];
        for (int i = 0; i < n; i++)
        {
            if (str[i].length() > max.length())
            {
                max = str[i];
            }
        }
        int maxlength = max.length();
        for (int i = 0; i < n; i++)
        {
            if (str[i].length() != maxlength)
            {
                int diff = maxlength - str[i].length();
                while (diff--)
                {
                    str[i] = '0' + str[i];
                }
            }
            cout << "str [" << i << "]" << str[i] << endl;
        }
        int carry = 0;
        string result;
        for (int i = str[0].length() - 1; i >= 0; i--)
        {
            int sum = 0;
            if (i == 0)
            {
                sum = sum + carry;
                for (int j = 0; j < n; j++)
                {
                    sum = sum + str[j][0] - 48;
                }
                while (sum != 0)
                {
                    result = result + to_string(sum % 10);
                    sum = sum / 10;
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    sum = sum + str[j][i] - 48;
                }
                //cout<<"sum is "<<sum<<endl;
                if (to_string(sum).length() > 1)
                {
                    if (carry)
                    {
                        sum = sum + carry;
                        int last_digit = sum % 10;
                        result = result + to_string(last_digit);
                        carry = sum / 10;
                    }
                    else
                    {
                        int last_digit = sum % 10;
                        result = result + to_string(last_digit);
                        carry = sum / 10;
                    }
                }
                else
                {
                    if (carry)
                    {
                        sum = sum + carry;
                        if (to_string(sum).length() > 1)
                        {
                            int last_digit = sum % 10;
                            result = result + to_string(last_digit);
                            carry = sum / 10;
                        }
                        else
                        {
                            result = result + to_string(sum);
                            carry = 0;
                        }
                    }
                    else
                    {
                        result = result + to_string(sum);
                        carry = 0;
                    }
                }
            }
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}