// class Solution
// {
// public:
//     int scoreOfParentheses(string s)
//     {

//         stack<int> st;

//         for (int i = 0; i < s.size(); i++)
//         {
//             char ch = s[i];
//             if (ch == '(')
//             {
//                 st.push(-1);
//             }
//             else
//             {
//                 if (st.top() == -1)
//                 {
//                     st.pop();
//                     st.push(1);
//                 }
//                 else
//                 {
//                     int val = 0;
//                     while (st.top() != -1)
//                     {
//                         val += st.top();
//                         st.pop();
//                     }
//                     val *= 2;
//                     st.pop();
//                     st.push(val);
//                 }
//             }
//         }

//         int ans = 0;
//         while (st.size() > 0)
//         {
//             ans += st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };