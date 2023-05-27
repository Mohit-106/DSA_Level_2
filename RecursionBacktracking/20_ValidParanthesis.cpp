//Some test cases failed

// class Solution
// {
// public:
//     vector<string> ans;
//     unordered_set<string> us;
//     int minRemoval(string &s)
//     {
//         stack<char> st;
//         for (int i = 0; i < s.size(); i++)
//         {
//             char ch = s[i];
//             if (ch == '(' || ch == ')')
//             {
//                 if (ch == '(')
//                 {
//                     st.push(s[i]);
//                 }
//                 else if (ch == ')')
//                 {
//                     if (st.size() == 0)
//                     {
//                         st.push(s[i]);
//                     }
//                     else if (st.top() == ')')
//                     {
//                         st.push(s[i]);
//                     }
//                     else if (st.top() == '(')
//                     {
//                         st.pop();
//                     }
//                 }
//             }
//         }
//         return st.size();
//     }
//     void removeInvalidParenthesesHelper(string s, int n)
//     {
//         if (n == 0)
//         {
//             int check = minRemoval(s);
//             if (check == 0)
//             {
//                 if (us.find(s) == us.end())
//                 {
//                     ans.push_back(s);
//                     us.insert(s);
//                 }
//             }
//             return;
//         }
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '(' || s[i] == ')')
//             {
//                 string left = s.substr(0, i);
//                 string right = s.substr(i + 1);
//                 removeInvalidParenthesesHelper(left + right, n - 1);
//             }
//         }
//     }
//     vector<string> removeInvalidParentheses(string s)
//     {
//         int n = minRemoval(s);
//         removeInvalidParenthesesHelper(s, n);
//         return ans;
//     }
// };



