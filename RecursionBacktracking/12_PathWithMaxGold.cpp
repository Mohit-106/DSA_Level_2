// class Solution
// {
// public:
//     int dfs(vector<vector<int>> &grid, int i, int j, vector<vector<bool>> &visited)
//     {
//         if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] == 0 || visited[i][j] == true)
//         {
//             return 0;
//         }
//         visited[i][j] = true;
//         int leftgold = dfs(grid, i, j - 1, visited);
//         int rightgold = dfs(grid, i, j + 1, visited);
//         int upgold = dfs(grid, i - 1, j, visited);
//         int belowgold = dfs(grid, i + 1, j, visited);
//         visited[i][j] = false;
//         return grid[i][j] + max(max(leftgold, rightgold), max(upgold, belowgold));
//     }
//     int getMaximumGold(vector<vector<int>> &grid)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<bool>> visited(n, vector<bool>(m));
//         int res = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (grid[i][j] != 0 && visited[i][j] == false)
//                 {
//                     res = max(dfs(grid, i, j, visited), res);
//                 }
//             }
//         }
//         return res;
//     }
// };


//WithoutExtra Space

// class Solution {
// public:
//     int dfs(vector<vector<int>>&grid,int i, int j){
//         if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || grid[i][j]==0){
//             return 0;
//         }
//         int val = grid[i][j];
//         grid[i][j]=0;
//         int leftgold = dfs(grid,i,j-1);
//         int rightgold = dfs(grid,i,j+1);
//         int upgold = dfs(grid,i-1,j);
//         int belowgold = dfs(grid,i+1,j);
//         grid[i][j] = val;
//         return val + max(max(leftgold,rightgold),max(upgold,belowgold));
//     }
//     int getMaximumGold(vector<vector<int>>& grid) {
//         int n= grid.size();
//         int m = grid[0].size();
//         //vector<vector<bool>>visited(n,vector<bool>(m));
//         int res=0;
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(grid[i][j]!=0){
//                     res= max(dfs(grid,i,j),res);
//                 }
//             }
//         }
//         return res;  
//     }
// };