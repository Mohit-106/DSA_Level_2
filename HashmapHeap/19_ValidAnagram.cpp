// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if(s.size()!=t.size()) return false;
//         unordered_map<char,int>mp;
//         for(char ch : s){
//             mp[ch]++;
//         }
//         for(char ch : t){
//             mp[ch]--;
//         }

//         for(auto val : mp){
//             //every character of t must make freq of s zero if it is not
//             //then it is not an anagram
//             if(val.second!=0) return false;
//         }

//         return true;
        
//     }
// };