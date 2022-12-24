// class Solution
// {
// public:
//     vector<int> smallestSubsegment(int arr[], int n)
//     {
//         unordered_map<int, int> mp;
//         unordered_map<int, int> fo;
//         int si = 0;
//         int ei = 0;
//         int mf = 0;
//         int len = 0;
//         for (int i = 0; i < n; i++)
//         {
//             mp[arr[i]]++;
//             if (fo.find(arr[i]) == fo.end())
//             {
//                 fo[arr[i]] = i;
//             }
//             if (mp[arr[i]] > mf)
//             {
//                 mf = mp[arr[i]];
//                 si = fo[arr[i]];
//                 ei = i;
//                 len = ei - si + 1;
//             }
//             else if (mp[arr[i]] == mf && len > i - fo[arr[i]] + 1)
//             {
//                 si = fo[arr[i]];
//                 ei = i;
//                 len = ei - si + 1;
//             }
//         }
//         vector<int> ans;
//         for (int i = si; i <= ei; i++)
//         {
//             ans.push_back(arr[i]);
//         }
//         return ans;
//     }
// };