//Cases
//1. Opening brackets are more
//2. Closing Brackets are more
//3. Correct 
//4. Wrong


// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>st;
//         st.push(s[0]);
//         for(int i = 1; i<s.size(); i++){
//             if(s[i]=='(' || s[i]== '{' || s[i]=='['){
//                 st.push(s[i]);
//             }else if(s[i]==')'){ 
//                 if(st.size()==0){
//                     return false;
//                 }
//                 else if(st.top()!='('){
//                     return false;
//                 }else{
//                     st.pop();
//                 }
//             }
//             else if(s[i]=='}'){   
//                 if(st.size()==0){
//                     return false;
//                 }else if(st.top()!='{'){
//                     return false;
//                 }else{
//                     st.pop();
//                 }
//             }
//             else if(s[i] == ']'){   
//                 if(st.size()==0){
//                     return false;
//                 }
//                 else if(st.top()!='['){
//                     return false;
//                 }
//                 else{
//                     st.pop();
//                 }
//             }
//         }
//         return st.size()==0 ;
//         }
         
// };