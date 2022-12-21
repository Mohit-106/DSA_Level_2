// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         set<pair<int,int>>s;
//         int j = 0;
//         int i = 1;
//         int count = 0;
//         while(i < nums.size() && j<nums.size()-1){
//             if(j==i){
//                 i=j+1;
//             }
//             if(abs(nums[i]-nums[j])==k){
//                 if(s.find({nums[i],nums[j]})==s.end()){
//                   s.insert(make_pair(nums[i],nums[j]));
//                   count ++;
//                 }
//                 i++;
//                 j++;
//             }else if(abs(nums[i]-nums[j])<k){
//                 i++;
//             }else{
//                 j++;
//             }
            
//         }
        
//         return count;
        
        
//     }
// };


#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<(-4)%3<<endl;
}
