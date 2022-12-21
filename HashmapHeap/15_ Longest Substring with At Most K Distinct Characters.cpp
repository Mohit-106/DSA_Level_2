//on lintcode

// class Solution {
// public:
//     /**
//      * @param s: A string
//      * @param k: An integer
//      * @return: An integer
//      */
//     int lengthOfLongestSubstringKDistinct(string &s, int k) {

//         int n = s.size();
//         unordered_map<char,int>mp;
//         int i=-1;
//         int j=-1;
//         int ans=0;

//         while(true){
//             bool f1 = false;
//             bool f2 = false;

//             while(i<n-1){
//                 f1=true;
//                 i++;
//                 mp[s[i]]++;
//                 if(mp.size()<=k){
//                     ans=max(ans,i-j);
//                 }else{
//                     break;
//                 }

//             }

//             while(j<i){
//                 f2=true;
//                 j++;
//                 if(mp[s[j]]==1){
//                     mp.erase(s[j]);
//                 }else{
//                     mp[s[j]]--;
//                 }

//                 if(mp.size()==k){
//                     break;
//                 }

//             }

//             if(f1==false && f2==false){
//                 break;
//             }

//         }
//         return ans;

//     }
// };