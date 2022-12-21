// class Solution
// {
// public:
//     vector<int> asteroidCollision(vector<int> &asteroids)
//     {
//         stack<int> st;
//         for (int i = 0; i < asteroids.size(); i++)
//         {
//             if (st.size() == 0)
//             {
//                 st.push(asteroids[i]);
//             }
//             else if (asteroids[i] > 0)
//             {
//                 st.push(asteroids[i]);
//             }
//             else if (st.top() < 0)
//             {
//                 st.push(asteroids[i]);
//             }
//             else
//             {
//                 int wt = abs(asteroids[i]);
//                 while (st.size() > 0 && st.top() > 0 && st.top() < wt)
//                 {
//                     st.pop();
//                 }
//                 if (st.size() == 0)
//                 {
//                     st.push(asteroids[i]);
//                 }
//                 else if (st.top() < 0)
//                 {
//                     st.push(asteroids[i]);
//                 }
//                 else if (st.top() == wt)
//                 {
//                     st.pop();
//                 }
//             }
//         }
//         vector<int> ans(st.size());
//         for (int i = ans.size() - 1; i >= 0; i--)
//         {
//             ans[i] = st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };