/*
 *
 * Author :  Ankit Surwade
 * B.TECH  CSE STUDENT
 * PUNE UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/annkit24
 * PROBLEM STATEMENT : Tricky Function
 */

#include <bits/stdc++.h>
using namespace std;
long long solve(long long n){
  if(n==0)
  return 0;
  else if(n==1){
    return 1;
  }

  if(n%2==0){
    return solve(n/2);
  }
  else{
  return solve(n-1)+1;
    
  }
  
}
int main()
{

  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
  cout<<solve(n)<<endl;
    
  }
  return 0;
}
