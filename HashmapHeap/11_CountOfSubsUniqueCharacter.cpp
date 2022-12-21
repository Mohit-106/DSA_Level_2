// int lengthOfLongestSubstring (string &s) {
//   if(s.size()==0) return 0;
//   int size  = s.size();
//         int ans=0;
//         unordered_map<char,int>mp;
//         int i=-1;
//         int j=-1;
//         int count = 0;
//         while(true){
//             count++;
//             //aquire and collect answer
//             bool f1=false;
//             bool f2=false;
//             while(i<size-1){
//                 i++;
//                 f1=true;
//                 mp[s[i]]++;
//                 if(mp[s[i]]==2){
//                     break;
//                 }
//               ans+=i-j;
//             }
//             //release and make string valid
//             while(j<i){
//                 j++;
//                 f2=true;
//                 mp[s[j]]--;
//                 if(mp[s[j]]==1){
//                 ans+=i-j;
//                     break;
//                 }
//             }
//             if(f1==false && f2==false){
//                 break;
//             }
//         }
//         return ans;
// }
 




//Count of nnumber of elements of substrings with unique character
// class Solution {
// public:
//     int uniqueLetterString(string s) {
//         int size  = s.size();
//         int ans=0;
//         unordered_map<char,int>mp;
//         int i=-1;
//         int j=-1;
//         int count = 0;
//         while(true){
//             count++;
//             //aquire and collect answer
//             bool f1=false;
//             bool f2=false;
//             while(i<size-1){
//                 i++;
//                 f1=true;
//                 mp[s[i]]++;
//                 if(mp[s[i]]==2){
//                     break;
//                 }
//                 int len = i-j;
//                 int pans = len*(len+1);
//                 pans=pans/2;
//                 ans+=pans;
//             }
//             //release and make string valid
//             while(j<i){
//                 j++;
//                 f2=true;
//                 mp[s[j]]--;
//                 if(mp[s[j]]==1){
//                 int len = i-j;
//                 int pans = len*(len+1);
//                 pans=pans/2;
//                 ans+=pans;
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