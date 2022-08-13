// class Solution
// {
// public:
//     vector<int> Lps(string &pat)
//     {
//         vector<int> arr(pat.size());
//         int i = 1;
//         int len = 0;
//         while (i < pat.size())
//         {
//             if (pat[i] == pat[len])
//             {
//                 len++;
//                 arr[i] = len;
//                 i++;
//             }
//             else if (len == 0)
//             {
//                 i++;
//             }
//             else
//             {
//                 len = arr[len - 1];
//             }
//         }
//         return arr;
//     }
//     vector<int> search(string pat, string txt)
//     {
//         vector<int> lps = Lps(pat);
//         vector<int> ans;
//         int i = 0;
//         int j = 0;
//         while (i < txt.size())
//         {
//             if (txt[i] == pat[j])
//             {
//                 i++;
//                 j++;
//             }
//             else if (j == 0)
//             {
//                 i++;
//             }
//             else
//             {
//                 // no need to start form the start
//                 j = lps[j - 1];
//             }
//             if (j == pat.size())
//             {
//                 ans.push_back(i - pat.size() + 1);
//             }
//         }
//         return ans;
//     }
// };

