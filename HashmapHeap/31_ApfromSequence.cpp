// class Solution {
// public:
//     bool canMakeArithmeticProgression(vector<int>& arr) {
//         //Step 1 find common difference 
//         //an=a0+(n-1)d
//         //d=(an-a0)/n-1
//         int n = arr.size()-1;
//         unordered_map<int,int>mp;
//         for(int i=0; i<arr.size();i++){
//             mp[arr[i]]++;
//         }
//         int nmax = INT_MIN;
//         int nmin = INT_MAX;
//         for(int i=0;i<arr.size();i++){
//             nmax=max(nmax,arr[i]);
//             nmin=min(nmin,arr[i]);
//         }
//         for(auto val : mp){
//             if(val.second < arr.size() && val.second>1){
//                 return false;
//             }
//         }
//         int d = (nmax-nmin)/n;
//         for(int i=1; i<=n; i++){
//             if(mp.find(nmin+i*d)==mp.end()){
//                 return false;
//             }
//         }
//         return true;        
//     }
// };