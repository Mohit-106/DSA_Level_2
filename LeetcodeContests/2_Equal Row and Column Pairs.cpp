// class Solution
// {
// public:
//     int equalPairs(vector<vector<int>> &grid)
//     {

//         vector<vector<int>> v(grid.size(), vector<int>(grid.size()));
//         int i = 0;
//         while (i < grid.size())
//         {
//             for (int j = 0; j < grid.size(); j++)
//             {
//                 v[i][j] = grid[j][i];
//             }
//             i++;
//         }
//         map<vector<int>, int> mp;
//         for (int i = 0; i < grid.size(); i++)
//         {
//             mp[grid[i]]++;
//         }

//         int count = 0;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (mp.find(v[i]) != mp.end())
//             {
//                 count += mp[v[i]];
//             }
//         }

//         return count;
//     }
// };