// class Solution {
// public:
    
//     void reverse(string &str){
        
//         int i = 0;
//         int j = str.size()-1;
//         while(i<=j){
//             char ch = str[i];
//             str[i]=str[j];
//             str[j]=ch;
//             i++;
//             j--;
//         }
        
//     }
//     string removeStars(string s) {
//         string ans;
//         stack<char>st;
//         for(int i = 0; i<s.size();i++){
//             if(s[i]=='*'){
//                 st.pop();
//             }else{
//                 st.push(s[i]);
//             }
//         }
        
//         while(st.size()>0){
//             ans+=st.top();
//             st.pop();
//         }
        
//         reverse(ans);
//         return ans;
        
//     }
// };