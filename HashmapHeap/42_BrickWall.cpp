// Min cuts  == points where max split possible
// Chech for all the paints where splits can be done 


// class Solution
// {
// public:
//     int leastBricks(vector<vector<int>> &wall)
//     {

//         // max split  = min cuts to bricks
//         unordered_map<int, int> mp;
//         for (vector<int> v : wall)
//         {
//             int psum = 0;
//             for (int i = 0; i < v.size() - 1; i++)
//             {
//                 psum += v[i];
//                 mp[psum]++;
//             }
//         }

//         int n = wall.size();

//         int ans = 0;

//         for (auto p : mp)
//         {
//             ans = max(ans, p.second);
//         }
//         return n - ans;
//     }
// };