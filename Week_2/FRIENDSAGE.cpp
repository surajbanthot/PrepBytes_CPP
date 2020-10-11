#include <iostream>
using namespace std;
int main() {
        int n;
  cin>>n;
    int ages[n];
for(int i=0;i<n;i++)
  cin>>ages[i];
        int count[121]={0};
        for (int i=0;i<n;i++) count[ages[i]]++;
  int ans = 0;
        for (int ageA = 0; ageA <= 120; ageA++)
        {
             int countA = count[ageA];
            for (int ageB = 0; ageB <= 120; ageB++) {
               int countB = count[ageB];
                if (ageA * 0.5 + 7 >= ageB) continue;
                if (ageA < ageB) continue;
                if (ageA < 100 && 100 < ageB) continue;
                  ans += countA * countB;
                if (ageA == ageB) ans -= countA;
            }
        }
        cout<<ans;
    }