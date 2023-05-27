// 2556. Disconnect Path in a Binary Matrix by at Most One Flip

// class Solution
// {
// public:
//     bool dfs(vector<vector<int>> &grid, int n, int m, int i, int j)
//     {

//         if (i == n || j == m || grid[i][j] == 0)
//         {
//             return false;
//         }

//         if (i == n - 1 && j == m - 1)
//         {
//             grid[i][j] = 0;
//             return true;
//         }

//         grid[i][j] = 0;
//         if (dfs(grid, n, m, i + 1, j))
//         {
//             return true;
//         }

//         if (dfs(grid, n, m, i, j + 1))
//         {
//             return true;
//         }

//         return false;
//     }

//     bool isPossibleToCutPath(vector<vector<int>> &grid)
//     {

//         int n = grid.size();
//         int m = grid[0].size();

//         if (dfs(grid, n, m, 0, 0) == false)
//         {
//             return true;
//         }
//         grid[0][0] = 1;
//         grid[n - 1][m - 1] = 1;
//         if (dfs(grid, n, m, 0, 0) == false)
//         {
//             return true;
//         }

//         return false;
//     }
// };