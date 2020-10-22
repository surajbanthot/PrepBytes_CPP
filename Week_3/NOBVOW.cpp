// int isVowel(char x)
// {
//     if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
//         return 1;
//     return 0;
// }
// int main()
// {
//     int check = 0, t;
//     cin >> t;
//     while (t--)
//     {
//         check = 0;
//         string data;
//         cin >> data;
//         int i = 0;
//         while (i != data.length()) // to check the complete string
//         {

//             if (check == 0) //condition when next can be anything
//             {
//                 if (isalpha(data[i]))
//                 {
//                     if (isVowel(data[i]))
//                         check = 0;
//                     else
//                     {
//                         if (data[i] == 'n')
//                             check = 0;
//                         else
//                             check = 1;
//                     }
//                 }
//                 else
//                     check = -1;
//             }
//             else if (check == 1)
//             {
//                 if (isVowel(data[i]))
//                     check = 0;
//                 else
//                     check = -1;
//             }
//             else if (check == -1) //-1 indicate the string break the rules
//                 break;
//             i++;
//         }
//         if (check == 0)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int counter = 0;
        for (int i = 0; i < s.length(); i = i + 1)
        {
            if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'n'))
            {
                if (!(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u'))
                {
                    counter = 1;
                }
            }
        }
        if (counter == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}