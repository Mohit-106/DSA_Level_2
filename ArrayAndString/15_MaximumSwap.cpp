// class Solution
// {
// public:
//     bool check(int a, int b)
//     {

//         if (a > b)
//         {
//             return true;
//         }
//         return false;
//     }

//     void swap(int a, int b, string &str)
//     {
//         char ch = str[a];
//         str[a] = str[b];
//         str[b] = ch;
//     }

//     int maximumSwap(int num)
//     {
//         string str = to_string(num);
//         stack<int> st;
//         vector<int> ltr(str.size(), -1);
//         st.push(str.size() - 1);
//         for (int i = str.size() - 2; i >= 0; i--)
//         {

//             while (st.size() > 0 && check(str[i] - '0', str[st.top()] - '0'))
//             {
//                 st.pop();
//             }
//             if (st.size() > 0)
//             {
//                 ltr[i] = st.top();
//             }
//             else
//             {
//                 ltr[i] = -1;
//                 st.push(i);
//             }
//         }

//         for (int i = 0; i < str.size() - 1; i++)
//         {

//             if (ltr[i] != -1 && str[i] != str[ltr[i]])
//             {
//                 swap(i, ltr[i], str);
//                 break;
//             }
//         }

//         return stoi(str);
//     }
// };