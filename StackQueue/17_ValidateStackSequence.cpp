// class Solution
// {
// public:
//     bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
//     {

//         stack<int> st;
//         int j = 0;
//         for (int i = 0; i < pushed.size() && j < popped.size(); i++)
//         {
//             st.push(pushed[i]);
//             while (st.size() > 0 && st.top() == popped[j])
//             {
//                 st.pop();
//                 j++;
//             }
//         }
//         while (j < popped.size())
//         {
//             if (st.top() == popped[j])
//             {
//                 st.pop();
//                 j++;
//             }
//             else
//             {
//                 return false;
//             }
//         }

//         return st.size() == 0;
//     }
// };