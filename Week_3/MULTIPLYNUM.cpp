#include <bits/stdc++.h>
using namespace std;

string multiply_strings(string s1, string s2)
{
    int len_1 = s1.length();
    int len_2 = s2.length();
    //create space to store the result and fill it with zero's
    string final_result(len_1 + len_2, '0');
    //reverse both number 1 and number 2, because we calculate it from reverse
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    //we use 2 loops because we have to multiply 2 numbers
    for (int i = 0; i < len_1; i++)
    {
        for (int j = 0; j < len_2; j++)
        {
            int tmp_result = (final_result[i + j] - '0') + (s1[i] - '0') * (s2[j] - '0');
            final_result[i + j] = '0' + tmp_result % 10;
            final_result[i + j + 1] += tmp_result / 10;
        }
    }
    for (int i = len_1 + len_2 - 1; i > 0 && final_result[i] == '0'; i--)
        final_result.pop_back();

    reverse(final_result.begin(), final_result.end());
    return final_result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string result = multiply_strings(s1, s2);
        cout << result << endl;
    }
    return 0;
}