// //2375. Construct Smallest Number From DI String
// class Solution {
// public:
//     string smallestNumber(string pattern) {
//         string ans;
//         int num = 1;
//         stack<int>st;
//         for(int i =0;i<pattern.size();i++){
//             if(pattern[i]=='D'){
//                 st.push(num);
//                 num++;
//             }else{
//                 st.push(num);
//                 num++;
//                 while(st.size()>0){
//                     //t top = st.top();
//                     ans+=to_string(st.top());
//                     st.pop();
//                 }
//             }
//         }
//         st.push(num);
//         while(st.size()>0){
//             ans+=to_string(st.top());
//             st.pop();
//         }
//         return ans;   
//     }
// };