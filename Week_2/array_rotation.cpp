#include<bits/stdc++.h>
using namespace std;

// function to left rotate arr[] of size n by 1

void leftRotateOne(int arr[], int n)
{
    int temp=arr[0], i;
    for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
    arr[i]=temp;
}

// function to left rotate arr[] of size n by d

void leftRotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    leftRotateOne(arr, n);
} 

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    // Function Calling
    leftRotate(arr, 2,n);
    printArray(arr, n);

    return 0;
}