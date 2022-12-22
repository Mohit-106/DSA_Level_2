// class Solution {
// public:
//     /**
//      * @param s: a string
//      * @param k: an integer
//      * @return: the number of substrings there are that contain at least k distinct characters
//      */
//     long long kDistinctCharacters(string &s, int k) {
//         int n = s.size();
//         unordered_map<char,int>mp;
//         int i = -1;
//         int j = -1;
//         long long  ans= 0;
//             while(true){
//             bool f1=false;
//             bool f2=false;
//             //acquire
//             while(i<n-1){
//                 f1=true;
//                 i++;
//                 mp[s[i]]++;
//                 if(mp.size()==k){
//                     ans+=n-i;
//                     break;
//                 }
//             }
//             //release char and check this cound be a answer or nor
//             while(j < i){
//                 f2=true;
//                 j++;
//                 if(mp[s[j]]==1){
//                     mp.erase(s[j]);
//                 }else{
//                     mp[s[j]]--;
//                 }      
//                 if(mp.size()==k){
//                     ans+=n-i;
//                 }else{
//                      break;
//                 }
//             }      
//             if(f1==false && f2==false){
//                 break;
//             }         
//         }
//         return ans;
//     }
// };