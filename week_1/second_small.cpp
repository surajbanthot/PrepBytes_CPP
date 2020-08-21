#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int second_small= std::max(std::min(x,y),std::min(std::max(x,y),z));
    cout<<second_small;
    return 0;
}