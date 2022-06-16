// https://leetcode.com/problems/valid-palindrome/submissions/

// class Solution {
// public:

//     string convertTostring(string & s){
//         string str = "";
//         for(int i=0;i<s.size();i++){
//             if(s[i]>='A'&&s[i]<='Z'){
//                 char sch = (char)(s[i]-'A'+'a');
//                 str+=sch;
//             }else if(s[i] >= 'a' && s[i] <= 'z'){
//                 str+=s[i];
//             }else if (s[i] >= '0' && s[i]<='9'){
//                 str+=s[i];
//             }else{

//             }
//         }

//         return str;
//     }

//     bool check(string & str, int lo, int hi){

//         if(lo > hi){
//             return true;
//         }

//         if(str[lo]==str[hi]){

//             bool flag = check(str,lo+1, hi-1);
//             if(flag){
//                 return true;
//             }

//         }

//         return false;

//     }

//     bool isPalindrome(string s) {

//         if(s.size()==0){
//             return true;
//         }

//        string str =  convertTostring(s);
//        return check(str,0,str.size()-1);

//     }
// };

// in this solution we used o(n) space

// think about not using extra space
// this below code is failed at some test cases

// #include <bits/stdc++.h>
// using namespace std;

// // void removeSpaces(string & s){

// //         int count=0;
// //         for(int i=0;i<=s.size();i++){
// //             if(s[i]!=' '){
// //                 s[count++] = s[i];
// //             }
// //         }

// //     }

// void removeSpaces(string & str)
// {
//     str.erase(remove(str.begin(), str.end(), ' '), str.end());

// }

// void convertTostring(string & s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             char sch = (char)(s[i] - 'A' + 'a');
//             s[i] = sch;
//         }
//         else if (s[i] >= 'a' && s[i] <= 'z')
//         {

//         }
//         else if (s[i] >= '0' && s[i] <= '9')
//         {

//         }
//         else{
//             s.erase(i, 1);
//         }
//     }

// }

// int main()
// {

//     string s;
//     getline(cin, s);
//     convertTostring(s);
//     removeSpaces(s);
//     cout<<s<<endl;

//     return 0;
// }