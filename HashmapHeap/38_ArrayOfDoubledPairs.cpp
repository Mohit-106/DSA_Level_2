// class Solution
// {
// public:
//     static bool comp(int i, int j)
//     {

//         return abs(i) < abs(j);
//     }

//     bool canReorderDoubled(vector<int> &nums)
//     {

//         sort(nums.begin(), nums.end(), comp);
//         unordered_map<int, int> mp;

//         for (int val : nums)
//         {
//             mp[val]++;
//             cout << val << " ";
//         }

//         for (int val : nums)
//         {
//             if (mp[val] > 0)
//             {
//                 if (mp.find(val * 2) != mp.end() && mp[val * 2] > 0)
//                 {
//                     mp[val]--;
//                     mp[val * 2]--;
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };