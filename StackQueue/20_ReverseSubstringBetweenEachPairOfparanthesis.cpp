// class Solution
// {
// public:
//     string reverseParentheses(string s)
//     {

//         stack<char> st;

//         for (int i = 0; i < s.size(); i++)
//         {

//             char ch = s[i];

//             if (ch == '(' || (ch >= 'a' && ch <= 'z'))
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 queue<char> temp;
//                 while (st.top() != '(')
//                 {
//                     temp.push(st.top());
//                     st.pop();
//                 }
//                 st.pop();

//                 while (temp.size() > 0)
//                 {
//                     st.push(temp.front());
//                     temp.pop();
//                 }
//             }
//         }

//         string ans;

//         while (st.size() > 0)
//         {
//             ans = st.top() + ans;
//             st.pop();
//         }

//         return ans;
//     }
// };