#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int q, n, i = 0, ans = INT_MAX, mx;
    vector<string> v;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    for (i = 0; i < n; i++)
    {
      mx = 0;
      for (int j = 0; j < n; j++)
      {
        a = v[j] + v[j];
        mx += a.find(v[i]);
      }
      ans = min(ans, mx);
    }
    if (ans < 0)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
  return 0;
}