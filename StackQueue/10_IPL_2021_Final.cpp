// class Solution {
//   public:
//     int findMaxLen(string s) {
//         stack<int>st;
//         int res = 0;
//         st.push(-1);  
//         for(int i = 0; i<s.size(); i++){
//             if(s[i]=='('){
//                 st.push(i);
//             }else{
//                 st.pop();
                  //when -1 is removes and st.size() becomes 0 then we push ) paranthesis
                  //ans start new substring considering this as -1 because it can not 
                  //contribute in subsequence
                  //((()))()((((()) Dry run this for better understanding
                  //(())() )) ()()()((()))
//                 if(st.size()>0){
//                     int length = i-st.top();
//                     res=max(res,length);
//                 }else{
//                     st.push(i);
//                 }            
//             }
//         }
//         return res;
//     }
// };

