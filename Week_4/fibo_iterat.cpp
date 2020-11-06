#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first = 0;
    int second = 1;
    cout << first << " ";
    cout << second << " ";
    //fibo series still 5
    for (int i = 2; i <= 5; i++)
    {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}