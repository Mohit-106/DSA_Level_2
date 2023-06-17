// class Solution
// {
// public:
//     string removeDuplicateLetters(string s)
//     {
//         vector<int> freq(26);
//         for (char ch : s)
//         {
//             freq[ch - 'a']++;
//         }
//         stack<char> st;
//         vector<int> pre(26);
//         for (char ch : s)
//         {
//             if (st.size() == 0)
//             {
//                 st.push(ch);
//                 freq[ch - 'a']--;
//                 pre[ch - 'a'] = 1;
//             }
//             else
//             {
//                 freq[ch - 'a']--;
//                 if (pre[ch - 'a'] == 0)
//                 {
//                     while (st.size() > 0 && freq[st.top() - 'a'] > 0 && st.top() > ch)
//                     {
//                         pre[st.top() - 'a'] = 0;
//                         st.pop();
//                     }
//                     st.push(ch);
//                     pre[ch - 'a'] = 1;
//                 }
//             }
//         }
//         string ans;
//         while (st.size() > 0)
//         {
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };