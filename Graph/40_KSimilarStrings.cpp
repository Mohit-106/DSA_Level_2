// class Solution
// {
// public:
//     string swaper(string str, int idx, int i)
//     {
//         char temp = str[idx];
//         str[idx] = str[i];
//         str[i] = temp;
//         return str;
//     }

//     vector<string> getnbrs(string &str, string &s2)
//     {
//         vector<string> res;
//         int idx = -1;
//         for (int i = 0; i < str.size(); i++)
//         {
//             if (str[i] != s2[i])
//             {
//                 idx = i;
//                 break;
//             }
//         }
//         if (idx != -1)
//         {

//             for (int i = idx + 1; i < str.size(); i++)
//             {
//                 if (str[i] == s2[idx])
//                 {
//                     string sdash = swaper(str, idx, i);
//                     res.push_back(sdash);
//                 }
//             }
//         }

//         return res;
//     }

//     int kSimilarity(string s1, string s2)
//     {

//         unordered_set<string> st;
//         queue<string> q;
//         q.push(s1);

//         int level = 0;
//         while (q.size() > 0)
//         {

//             int size = q.size();
//             while (size--)
//             {
//                 string str = q.front();
//                 q.pop();

//                 if (st.find(str) != st.end())
//                 {
//                     continue;
//                 }
//                 st.insert(str);

//                 if (s2 == str)
//                 {
//                     return level;
//                 }

//                 for (string &nbr : getnbrs(str, s2))
//                 {
//                     if (st.find(nbr) == st.end())
//                     {
//                         q.push(nbr);
//                     }
//                 }
//             }
//             level++;
//         }

//         return -1;
//     }
// };