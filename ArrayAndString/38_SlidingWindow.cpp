// class Solution
// {
// public:
//     vector<int> maxSlidingWindow(vector<int> &nums, int k)
//     {
//         int n = nums.size();
//         vector<int> res;
//         stack<int> st;
//         st.push(n - 1);
//         vector<int> ngl(n, n);
//         for (int i = n - 2; i >= 0; i--)
//         {
//             while (st.size() > 0 && nums[i] >= nums[st.top()])
//             {
//                 st.pop();
//             }
//             if (st.size() != 0)
//             {
//                 ngl[i] = st.top();
//             }
//             st.push(i);
//         }
//         int j = 0;
//         for (int i = 0; i <= n - k; i++)
//         {
//             if (j < i)
//             {
//                 j = i;
//             }
//             while (ngl[j] <= i + k - 1)
//             {
//                 j = ngl[j];
//             }
//             res.push_back(nums[j]);
//         }
//         return res;
//     }
// };