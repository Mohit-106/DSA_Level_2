// class Solution {
// public:
//     int minSteps(string s, string t) {

//         unordered_map<char,int>mp;
//         int k=0;
//         for(char ch : s){
//             mp[ch]++;
//         }
        
//         for(char ch : t){
//             mp[ch]--;
//         }

//         for(auto val : mp){
//             if(val.second>0){
//                 k+=val.second;
//             }
//         }
//         return k;

        
//     }
// };