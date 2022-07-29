// class Solution
// {
// public:
//     vector<int> partitionLabels(string s)
//     {

//         unordered_map<char, int> mp;
//         for (int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]] = i;
//         }

//         vector<int> res;
//         int range = -1;
//         int prevSum = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             range = max(range, mp[s[i]]);
//             if (range == i)
//             {
//                 int val = range + 1 - prevSum;
//                 res.push_back(val);
//                 prevSum += val;
//             }
//         }
//         return res;
//     }
// };