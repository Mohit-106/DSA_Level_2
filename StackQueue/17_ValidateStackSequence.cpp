// class Solution
// {
// public:
//     bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
//     {

//         int i = 0;
//         int j = 0;

//         stack<int> st;

//         while (i < pushed.size() && j < popped.size())
//         {

//             if (st.size() == 0)
//             {
//                 st.push(pushed[i]);
//             }
//             else
//             {

//                 while (st.size() > 0 && st.top() == popped[j])
//                 {
//                     st.pop();
//                     j++;
//                 }

//                 st.push(pushed[i]);
//             }
//             i++;
//         }

//         while (st.size() > 0 && j < popped.size())
//         {
//             if (popped[j] != st.top())
//             {
//                 return false;
//             }
//             st.pop();
//             j++;
//         }

//         return true;
//     }
// };