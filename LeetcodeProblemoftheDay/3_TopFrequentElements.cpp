// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
//         for(int val : nums) mp[val]++;
//         priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
//         for(auto val : mp){
//             pq.push({val.second,val.first});
//             cout<<val.first<<" "<<val.second<<endl;
//          }
//         cout<<" ---- "<<endl;
        
//         vector<int>ans;
//         for(int i =1;i<=k;i++){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };