// class Solution
// {
// public:
//     int numRabbits(vector<int> &nums)
//     {
//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             mp[nums[i]]++;
//         }
//         double ans = 0;
//         for (auto Pair : mp)
//         {
//             double msg = Pair.first + 1; // max size of the group
//             double trr = Pair.second;    // total number of rabbit reported
//             double groups = trr / msg;
//             double cg = ceil(groups);
//             double totalrabbits = msg * cg;
//             ans += totalrabbits;
//         }
//         int fans = int(ans);
//         return fans;
//     }
// };