#include<bits/stdc++.h>
using namespace std;

// int fun(int a[],int n)
// {
//   int x;
//   if(n == 1)
//     return a[0];
//   else
//     x = fun(a, n-1);
//   if(x > a[n-1])
//     return x;
//   else
//     return a[n-1];
// }
 
// int main()
// {
//   int arr[] = {12, 10, 30, 50, 100};
//   cout<< fun(arr,5);
//   return 0;
// }

// int sumDigits(int no)
// {
//    return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
// }
 
// int main(void)
// {
//     cout<< sumDigits(718);
//     return 0;
// }


void fun(int n)
{
    if(n > 0)
    {
        fun(n-1);
        cout<< n;
        fun(n-1);
    }
}
 
int main()
{
    fun(4);
    return 0;
}

