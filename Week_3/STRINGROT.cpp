#include <iostream>
#include <string>
using namespace std;
int main()
{

    int i, j, k;
    int n, m;
    int l, r, st;
    string s;

    cin >> s;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        string t;
        cin >> l >> r >> k;

        k = k % (r - l + 1);
        cout <<" k "<< k << endl;
        if (k != 0)
        {
            st = r - k + 1;
            cout<<" st "<<st<<endl;
            st--;
           cout<<"st "<<st<<endl;
            for (j = st; j < r; j++)
            {
                cout<<"j "<<j<<" s[j] "<<s[j];
                t.push_back(s[j]);
                
                cout<<" t "<<t<<endl;
            }

            for (j = l - 1; j < st; j++)
            {
                cout<<" j "<<j<<" s[j] "<<s[j];
                t.push_back(s[j]);
                cout<<" t "<<t<<endl;
            }

            int idx = 0;
            for (j = l - 1; j < r; j++)
            {
                
                s[j] = t[idx];
                cout<<" s[j] "<<s[j];
                idx++;
                cout<<" idx "<<idx<<endl;
                
            }
            cout<<" s "<<s<<endl;
        }
    }

    cout <<"s "<< s;

    return 0;
}
