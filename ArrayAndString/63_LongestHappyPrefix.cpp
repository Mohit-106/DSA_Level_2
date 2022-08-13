// class Solution {
// public:
//     string longestPrefix(string s) {
//         vector<int>lps(s.size()); // longest prefix-sufix sum
//         int len =0;
//         int i =1;
//         while(i<s.size()){         
//             if(s[i]==s[len]){
//                 len++;
//                 lps[i]=len;
//                 i++;
//             }else if(len==0){
//                 lps[i]=0;
//                 i++;
//             }else{
//                 len = lps[len-1];
//             } 
//         }
//         //now in lps we have longest prefix-sufix length for idx lengh string
//         //Hence at the last index we have largest pre-su length for the string of lenght s;     
//         return s.substr(0,lps[s.size()-1]);      
//     }
// };