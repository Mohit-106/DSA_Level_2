// 2830. Maximize the Profit as the Salesman

// class Solution {
// public:

//     unordered_map<int,int>mp;
//     int dfs(vector<vector<int>>& offers,int i){

//         if(i>=offers.size()) return 0;

//         if(mp.find(i)!=mp.end()){
//             return mp[i];
//         } 

        

//         int ans = dfs(offers,i+1);
//         int tar = offers[i][1]+1;
//         int lo = i+1;
//         int hi = offers.size()-1;

//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(offers[mid][0] < tar){
//                 lo = mid+1;
//             }else if(offers[mid][0]>=tar){
//                 hi = mid-1;
//             }
//         }
         
//         ans = max(ans,(dfs(offers,lo)+offers[i][2]));
//         mp[i] = ans;
//         return ans;
//     }




//     int maximizeTheProfit(int n, vector<vector<int>>& offers) {

//         int m = offers.size();
//         sort(offers.begin(),offers.end());
//         return dfs(offers,0);

//     }
// };