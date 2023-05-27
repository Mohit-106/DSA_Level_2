// class Solution
// {
// public:
//     vector<int> ans;
//     void helper(int n, int m, int bits, vector<int> &pbits, int idx, vector<int> asf)
//     {

//         if (idx == n)
//         {
//             if (bits == (1 << m) - 1)
//             {
//                 if (ans.size() == 0 || asf.size() < ans.size())
//                 {
//                     ans = asf;
//                 }
//             }
//             return;
//         }

//         if (ans.size() != 0 && asf.size() > ans.size())
//         {
//             return;
//         }

//         // include
//         asf.push_back(idx);
//         helper(n, m, (bits | pbits[idx]), pbits, idx + 1, asf);
//         asf.pop_back();

//         helper(n, m, bits, pbits, idx + 1, asf);
//     }

//     vector<int> smallestSufficientTeam(vector<string> &s, vector<vector<string>> &p)
//     {

//         int m = s.size();

//         unordered_map<string, int> mp;
//         for (int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]] = i;
//         }

//         vector<int> pbit;
//         for (auto skills : p)
//         {
//             int sbm = 0;
//             for (string sk : skills)
//             {
//                 sbm = sbm | 1 << mp[sk];
//             }
//             pbit.push_back(sbm);
//         }

//         vector<int> asf;
//         helper(pbit.size(), m, 0, pbit, 0, asf);

//         return ans;
//     }
// };