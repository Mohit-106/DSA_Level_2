//Do this with dp also
// class Solution {
// public:
//     bool helper(string s, set<string>& st){
//         if(s.size()==0){
//             return true;
//         }
//         for(int i=0; i<s.size(); i++){
//             string left = s.substr(0,i+1);
//             bool check = false;
//             if(st.find(left) != st.end()){
//                 check = helper(s.substr(i+1),st);
//             }
//             if(check){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         set<string>st;
//         for(string str : wordDict){
//             st.insert(str);
//         }
//         return helper(s,st);
//     }
// }; 
// #include <iostream>
// #include <string>
// #include <unordered_set>
// using namespace std;
// void wordBreak(string s, string ans, unordered_set<string>& dict){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0; i<s.size(); i++){
//         string left = s.substr(0,i+1);
//         if(dict.find(left)!=dict.end()){
//             wordBreak(s.substr(i+1),ans+left+" ", dict);
//         }
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     unordered_set<string> dict;
//     for(int i = 0; i < n; i++){
//         string word;
//         cin >> word;
//         dict.insert(word);
//     }
//     string sentence;
//     cin >> sentence;
//     wordBreak(sentence, "", dict);
//     return 0;
// }

