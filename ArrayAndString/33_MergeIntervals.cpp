//using stack
// class Solution
// {
// public:
//     vector<vector<int>> merge(vector<vector<int>> &intervals)
//     {
//         sort(intervals.begin(), intervals.end());
//         stack<vector<int>> st;
//         st.push(intervals[0]);
//         for (int i = 1; i < intervals.size(); i++)
//         {
//             vector<int> top = st.top();
//             int val = intervals[i][0];
//             if (top[1] >= val)
//             {
//                 st.pop();
//                 int maxm = max(top[1], intervals[i][1]);
//                 st.push({top[0], maxm});
//             }
//             else
//             {
//                 st.push(intervals[i]);
//             }
//         }
//         vector<vector<int>> ans(st.size(), vector<int>());
//         int i = ans.size() - 1;
//         while (st.size() > 0)
//         {
//             ans[i] = st.top();
//             st.pop();
//             i--;
//         }
//         return ans;
//     }
// };


//Also can be done without using stack