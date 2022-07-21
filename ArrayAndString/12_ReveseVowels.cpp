//Can use set instead of string str

// class Solution {
//     public:
//     void swap(int i, int j , string &s){
//         char ch = s[i];
//         s[i]=s[j];
//         s[j]=ch;
//     }
//     string str = "aeiouAEIOU";
//     bool check(char ch){
        
//         for(int i=0;i<str.size();i++){
//             if(ch==str[i]){
//                 return true;
//             }
//         }
//         return false;
        
//     }
//     string reverseVowels(string s) {
//         int i =0; 
//         int j= s.size()-1;
//         while(i<j){
//             while(i<j && check(s[i])==false){
//                 i++;
//             }
//             while(i<j && check(s[j])==false){
//                 j--;
//             }
//             swap(i,j,s);
//             i++;
//             j--;
            
//         }
        
//         return s;
    
//     }
// };