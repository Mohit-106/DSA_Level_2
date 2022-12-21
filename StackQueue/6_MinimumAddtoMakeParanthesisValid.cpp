//Insertion

// class Solution {
// public:
//     int minAddToMakeValid(string s) {
        
        
//         //Settle '(' with ')'
//         //Left brackets need partners
        
//         stack<char>st;
//         st.push(s[0]);
//         for(int i =1; i<s.size(); i++){
            
//             if(s[i]=='('){
//                 st.push(s[i]);
//             }else if(s[i]==')'){
//                 if(st.size()==0){
//                     st.push(s[i]);
//                 }else if(st.top()=='('){
//                     //settle '(' with ')'
//                     st.pop();
//                 }else{
//                     st.push(s[i]);
//                 }
//             }
            
//         }
//         int count = 0;
//         while(st.size()>0){
//             st.pop();
//             count++;
//         }
//         return count;
        
//     }
// };