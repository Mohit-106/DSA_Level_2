// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temp){
//         stack<int>st;
//         vector<int>ans(temp.size());
//         ans[ans.size()-1] = 0;
//         int i = temp.size()-2;
//         st.push(temp.size()-1);
//         while(i>=0){
//             while(st.size()>0 && temp[st.top()] <= temp[i]){
//                 st.pop();
//             }
//             if(st.size()==0){
//                 ans[i] = 0;
//             }else{
//                 ans[i]=st.top() - i;;
//             }
//             st.push(i);
//             i--;
//         }
//         return ans;
//     }
// };