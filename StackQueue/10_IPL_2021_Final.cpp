// class Solution {
//   public:
//     int findMaxLen(string s) {
        
        
//         stack<int>st;
//         st.push(-1);
//         int ans = 0;
//         for(int i=0; i<s.size(); i++){
            
//             char ch = s[i];
//             if(ch=='('){
//                 st.push(i);
//             }else if(st.size()>0 && s[st.top()]=='('){
//                 //valid so collect the potential ans
//                 if(s[st.top()]=='('){
//                     st.pop();
//                     int len = i - st.top();
//                     ans = max(ans,len);
//                 }else{
//                     // Invaalid just push
//                     st.push(i);
//                 }
                
//             }else{
//                     // invalid just push
//                     st.push(i);
//             }
            
//         }
        
//         return ans;
        
        
        
//     }
// };