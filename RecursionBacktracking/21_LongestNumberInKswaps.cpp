// 2 testcase failed on GFG
// class Solution
// {
//     public:
//     //Function to find the largest number after k swaps.
//     string ans;
//     void swap(string &str, int i, int j ){
//         char ch = str[i];
//         str[i] = str[j];
//         str[j] = ch;
//     }
//     void compare(string &str){
//         for(int i=0; i<str.size(); i++){
//             if(str[i] > ans[i]){
//                 ans = str;
//                 break;
//             }else if(str[i] < ans[i]){
//                 break;
//             }
//         }
//     }
//     void findMaximumNumHelper(string str, int k){
//         compare(str);
//         if(k==0){
//             return;
//         }
//         for(int i=0; i<str.size()-1; i++){
//             for(int j=i+1; j<str.size(); j++){
//                 if(str[i] < str[j]){
//                     swap(str,i,j);
//                     findMaximumNumHelper(str,k-1);
//                     swap(str,i,j);
//                 }
//             }
//         }
//     }
//     string findMaximumNum(string str, int k){
//         ans = str;
//         findMaximumNumHelper(str,k);
//         return ans;
//     }
// };