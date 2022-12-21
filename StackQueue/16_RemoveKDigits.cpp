// class Solution
// {
// public:
//     string removeKdigits(string num, int k)
//     {
//         stack<char> st;
//         for (char ch : num)
//         {
//             if (st.size() == 0)
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 while (st.size() > 0 && ch < st.top() && k > 0)
//                 {
//                     st.pop();
//                     k--;
//                 }
//                 st.push(ch);
//             }
//         }
//         // for test case like 123456
//         while (k > 0)
//         {
//             st.pop();
//             k--;
//         }
//         string ans;
//         while (st.size() > 0)
//         {
//             ans += st.top();
//             st.pop();
//         }
//         // this loop is remove trailing zeros
//         // 000211
//         for (int i = ans.size() - 1; i >= 0; i--)
//         {
//             if (ans[i] == '0')
//             {
//                 ans.erase(i, 1);
//             }
//             else
//             {
//                 break;
//             }
//         }
//         reverse(ans.begin(), ans.end());
//         return ans.size() == 0 ? "0" : ans;
//     }
// };