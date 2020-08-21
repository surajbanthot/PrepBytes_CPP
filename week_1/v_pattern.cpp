#include <iostream>
using namespace std;

int main()
{
    int lines = 5, spaces = 0;
    // spaces formula to print out in a single row
    spaces = (lines * 2) - 2;
    for (int i = 1; i <= lines; i++)
    {
        // there will be three sections
        // left part
        for (int l = 1; l <= i; l++)
        {
            cout << l;
        }

        // spaces
        for (int s = 1; s <= spaces; s++)
        {
            cout << " ";
        }

        // right parts
        for (int r = i; r >= 1; r--)
        {
            cout << r;
        }

        // increase the space iteratively for the next run
        spaces = spaces - 2;
        cout << "\n";
    }
}