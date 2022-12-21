// class Solution {
// public:
//     bool carPooling(vector<vector<int>>& trips, int capacity) {
        
//         map<int,int>mp;
//         for(vector<int>& trip : trips){
            
//             int pas = trip[0];
//             int pic = trip[1];
//             int drop = trip[2];
//             mp[pic]+=pas;
//             mp[drop]-=pas;
            
//         }
        
//         int count = 0;
//         for(auto &pr : mp){
//             cout<<pr.first<<" "<<pr.second<<endl;
//             count+=pr.second;
//             if(count>capacity){
//                 return false;
//             }
//         }
        
//         return true;
        
        
        
//     }
// };