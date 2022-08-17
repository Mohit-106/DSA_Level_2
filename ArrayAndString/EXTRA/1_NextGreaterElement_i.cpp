// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>nge(nums1.size());
//         unordered_map<int,int>mp;
//         stack<int>st;
//         st.push(nums2[nums2.size()-1]);
//         mp[nums2[nums2.size()-1]]=-1;
//         for(int i = nums2.size()-2;i>=0;i--){
//             int val = nums2[i];
//             while(st.size()>0 && val >= st.top()){
//                 st.pop();
//             }
//             if(st.size()>0){
//                 mp[nums2[i]]=st.top();
//                 cout<<st.top()<<endl;
//             }else{
//                 mp[nums2[i]]=-1;
//             }
//             st.push(nums2[i]);
//         }
//         for(int i = 0; i<nums1.size();i++){
//             nge[i] = mp[nums1[i]];
//         }
//         return nge;     
//     }
// };