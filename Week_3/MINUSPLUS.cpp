#include <bits/stdc++.h>
using namespace std;
int main()
{
  //write your code here
  int T;
  cin >> T;
  while (T--)
  {
    string s, t;
    cin >> s;
    cin >> t;
    int i, k = 0;
    string c = "";
    int r = 0;
    if (s == t)
    {
      cout << "YES" << endl;
      continue;
    }
    else
    {
      for (i = 0; i < t.length(); i++)
      {
        if (s[k] != t[i])
        {
          if (s[k] == '-' && s[k + 1] == '-')
          {
            c += '+';
            k += 2;
          }
          else
          {
            c += s[k];
            k += 1;
          }
        }
        else
        {
          c += s[k];
          k += 1;
        }
      }
      for (i = k; i < s.length(); i++)
      {
        c += s[i];
      }
      // cout<<"c is :"<<c<<endl;
      if (c == t)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
  return 0;
}