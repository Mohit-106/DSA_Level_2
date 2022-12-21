// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if(s.size()==0) return 0;

//         int ans = 0;
//         unordered_map<char,int>mp;
//         int i = -1;
//         int j = -1;
//         int n = s.size();

//         while(true){

//             bool f1 = false;
//             bool f2 = false;

//             // acquire till become invalid and collect ans 
//             while(i < n-1){
//                 i++;
//                 f1=true;
//                 mp[s[i]]++;
//                 //max freq can only be 2 
//                 if(mp[s[i]]==2){
//                     break;
//                 }
//                 ans=max(ans,i-j);

//             }
//             //release till become valid
//             while(j<i){
//                 f2=true;
//                 j++;
//                 mp[s[j]]--;
//                 if(mp[s[j]]==1){
//                     break;
//                 }
//             }

//             if(f1==false && f2==false){
//                 break;
//             }

//         }

//         cout<<i<<j<<endl;
//         return ans;
        
//     }
// };