// class Solution {
// public:
    
//     vector<int> leftBoundry(vector<int>& heights){
//         //int n = heights.size();
//         vector<int>ans(heights.size());
//         ans[0] = -1;
//         stack<int>st;
//         st.push(0);
//         for(int i = 1; i<heights.size(); i++){
//             while(st.size() > 0 && heights[st.top()] >= heights[i]){
//                 st.pop();
//             }
//             if(st.size()!=0){
//                 ans[i] = st.top();
//             }else{
//                 ans[i]=-1;
//             }
//             st.push(i);
//         }
//         return ans;
        
//     }
    
//     vector<int>RightBoundry(vector<int>& heights){
        
//         //int n = heights.size();
//         vector<int>ans(heights.size());
//         ans[heights.size()-1] = heights.size();
//         stack<int>st;
//         st.push(heights.size()-1);
//         for(int i = heights.size()-2; i>=0; i--){
//             while(st.size() > 0 && heights[st.top()] >= heights[i]){
//                 st.pop();
//             }
//             if(st.size()!=0){
//                 ans[i] = st.top();
//             }else{
//                 ans[i]=heights.size();
//             }
//             st.push(i);
//         }
//         return ans;
//     }
    
    
//     int largestRectangleArea(vector<int>& heights) {
        
//         vector<int>left = leftBoundry(heights);
//         vector<int>right = RightBoundry(heights);
//         int histogram = 0;
//         for(int i = 0 ; i < heights.size(); i++){
//             int leftWidht =i-left[i]-1;
//             int rightWidth = right[i]-i-1 ;
//             int area = heights[i]*(leftWidht+rightWidth+1);
//             histogram = max(histogram,area);
//         }
//         return histogram;
        
//     }
// };