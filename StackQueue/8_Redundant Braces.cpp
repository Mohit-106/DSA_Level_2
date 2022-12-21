//InterviewBit
// int Solution::braces(string s) {
//     stack<char>st;
//     st.push(s[0]);
//     for(int i = 1; i<s.size(); i++){
//         if(s[i]==')'){
//             if(st.top() =='('){
//                 return 1;
//             }
//             while(st.top() != '('){
//                 st.pop();
//             }
//             st.pop();
//         }else if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
//             st.push(s[i]);
//         }
//     }
//     return 0;
// }
