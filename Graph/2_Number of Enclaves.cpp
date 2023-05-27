//https://leetcode.com/problems/number-of-enclaves/
// class Solution {
// public:
//     bool flag = true;
//     int len = 0;
//     void Travel(vector<vector<int>>&grid, int i , int j, vector<vector<bool>>&visited){
//         if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
//             flag = false;
//             return;
//         }else if(visited[i][j]==true){
//             return;
//         }else if(grid[i][j]==0){
//             return;
//         }
//         visited[i][j]=true;
//         len++;
//         Travel(grid,i+1,j,visited);
//         Travel(grid,i-1,j,visited);
//         Travel(grid,i,j+1,visited);
//         Travel(grid,i,j-1,visited);        
//     }
//     int numEnclaves(vector<vector<int>>& grid) {
//         int count = 0;
//         vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
//         for(int i=1; i< grid.size()-1; i++){           
//             for(int j=1;j<grid[i].size()-1;j++){
//                 if(visited[i][j]==false && grid[i][j]==1){
//                     len =0;
//                     flag = true;
//                     Travel(grid,i,j,visited);
//                     if(flag){
//                         count+=len;
//                     }
//                 }
//             }
//         }
//         return count;
//     }
// };


//Solution 2
// class Solution {
// public:
//     void dfs(vector<vector<int>>&grid, int i, int j){
//         if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0){
//             return;
//         }
//         grid[i][j]=0;
//         dfs(grid,i,j+1);
//         dfs(grid,i,j-1);
//         dfs(grid,i+1,j);
//         dfs(grid,i-1,j);
//     }
//     int numEnclaves(vector<vector<int>>& grid) {
//         int n= grid.size();
//         int m=grid[0].size();
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i==0 || j==0 || i==n-1 || j==m-1){
//                     dfs(grid,i,j);
//                 }
//             }
//         }
//         int ans=0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j]==1){
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };