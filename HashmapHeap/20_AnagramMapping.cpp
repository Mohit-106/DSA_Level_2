// class Solution {
// public:
//     /**
//      * @param a: lists A
//      * @param b: lists B
//      * @return: the index mapping
//      */
//     vector<int> anagramMappings(vector<int> &a, vector<int> &b) {
//         // Write your code here
//         vector<int>ans;
//         unordered_map<int,int>mp;
//         for(int i = 0; i<b.size(); i++){
//             mp[b[i]]=i;
//         }

//         for(int i=0; i<a.size(); i++){
//             ans.push_back(mp[a[i]]);
//         }

//         return ans;

//     }
// };