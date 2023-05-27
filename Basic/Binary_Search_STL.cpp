#include <bits/stdc++.h>
using namespace std;

int main(){

   vector<int>nums = {1,4,5,60};
   int idx = upper_bound(nums.begin(), nums.end(), 6) - nums.begin();
   //int idx = lower_bound(nums.begin(), nums.end(), 3) - nums.begin();
   cout<<idx<<endl; 

    return 0;
}