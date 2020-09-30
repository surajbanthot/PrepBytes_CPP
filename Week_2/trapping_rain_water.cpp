// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

#include<bits/stdc++.h>

using namespace std;

int maxWater(int arr[], int n)
{

    int res=0;

    // for every element of the array
    for(int i=1;i<n-1;i++)
    {
        // find the maximum element on its left.
        int left=arr[i];
        for(int j=0;j<i;j++)
        left=std::max(left, arr[j]);

        // find the maximum element on it's right.
        int right =arr[i];
        for(int j=i+1;j<n;j++)
        right=max(right, arr[j]);

        //update the maximum water
        res=res+(min(left, right)-arr[i]);
    }
    return res;
}

int main()
{
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxWater(arr, n);
    return 0;
}
