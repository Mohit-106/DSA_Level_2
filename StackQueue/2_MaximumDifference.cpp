//gfg
// class Solution{
//     public:
//     vector<int> leftSmaller(int nums[], int n){
//         vector<int>res(n);
//         res[0]=0;
//         stack<int>st;
//         st.push(nums[0]);
//         for(int i =1; i<n; i++){
//             while(st.size()>0 && nums[i] <= st.top()){
//                 st.pop();
//             }
//             if(st.size()!=0){
//                 res[i] = st.top();
//             }
//             st.push(nums[i]);
//         }
//         return res;
//     }
//      vector<int> rightSmaller(int nums[], int n){
//         vector<int>res(n);
//         res[n-1]=0;
//         stack<int>st;
//         st.push(nums[n-1]);
//         for(int i =n-2; i>=0; i--){
//             while(st.size()>0 && nums[i] <= st.top()){
//                 st.pop();
//             }
//             if(st.size()!=0){
//                 res[i] = st.top();
//             }
//             st.push(nums[i]);
//         }
//         return res;
//     }
//     int findMaxDiff(int nums[], int n)
//     {
//       vector<int> left  = leftSmaller(nums,n);
//       vector<int> right = rightSmaller(nums,n);
//       int diff = INT_MIN;
//       for(int i = 0 ; i<n; i++){
//           int val =  abs(left[i]-right[i]);
//           diff = max(diff,val);
//       }
//       return diff;
//     }
// };