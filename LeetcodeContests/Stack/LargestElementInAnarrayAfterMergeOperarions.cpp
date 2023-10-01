//2789. Largest Element in an Array after Merge Operations

// class Solution
// {
// public:
//     long long maxArrayValue(vector<int> &nums)
//     {

//         // stack<long long >st1;
//         stack<long long> st;
//         int n = nums.size();

//         long long res = 0;

//         st.push(nums[n - 1]);
//         for (int i = n - 2; i >= 0; i--)
//         {
//             if (nums[i] <= st.top())
//             {
//                 long long top = st.top();
//                 st.pop();
//                 st.push((long long)(nums[i] + top));
//             }
//             else
//             {
//                 st.pop();
//                 st.push(nums[i]);
//             }
//         }

//         return st.top();
//     }
// };