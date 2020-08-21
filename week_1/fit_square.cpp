// PrepBuddy provided you with a rectangular board of M  xN  dimension. Also, he provided an unlimited number of small blocks of 2 x 1  size. You are allowed to rotate the block. You are asked to place as many blocks as possible on the board to meet the following conditions:
// 1. Each block completely covers two squares.
// 2. No two blocks overlap.
// 3. Each block lies entirely inside the board. It is allowed to touch the edges of the board.
// Find the maximum number of blocks, which can be placed under these restrictions.


#include<iostream>
using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int m,n;
        cin>>m>>n;
        cout<<(m*n)/2;

    }

    return 0;
}