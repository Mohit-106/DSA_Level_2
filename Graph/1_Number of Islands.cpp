//https://leetcode.com/problems/number-of-islands/submissions/

//Approach 1 withhout using visited array space

// class Solution {
// public:
    
//     void Travel(vector<vector<char>>&grid, int i, int j){
        
//         if(i<0 || i>=grid.size() || j<0 || j>= grid[0].size()){
//             return;
//         }
//         else if(grid[i][j]=='0'){
//             return;
//         }
        
//         grid[i][j]='0';
//         Travel(grid,i+1,j);
//         Travel(grid,i-1,j);
//         Travel(grid,i,j+1);
//         Travel(grid,i,j-1);
        
        
//     }
    
    
//     int numIslands(vector<vector<char>>& grid) {
        
//        // vector<vector<bool>> visited (grid.size(),vector<bool>(grid[0].size()));
//         int count =0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(grid[i][j] =='1'){
//                     count++;
//                     Travel(grid,i,j);
//                 }
//             }
//         }
        
//         return count;
        
//     }
// };



// Approach with using visited array space

// class Solution {
// public:
    
//     void Travel(vector<vector<char>>&grid, int i, int j , vector<vector<bool>>& visited){
        
//         if(i<0 || i>=grid.size() || j<0 || j>= grid[0].size()){
//             return;
//         }
//         else if(grid[i][j]=='0'){
//             return;
//         }
//         else if(visited[i][j]==true){
//             return;
//         }
        
//         visited[i][j]=true;
//         Travel(grid,i+1,j,visited);
//         Travel(grid,i-1,j,visited);
//         Travel(grid,i,j+1,visited);
//         Travel(grid,i,j-1,visited);
        
        
//     }
    
    
//     int numIslands(vector<vector<char>>& grid) {
        
//         vector<vector<bool>> visited (grid.size(),vector<bool>(grid[0].size()));
//         int count =0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(visited[i][j]==false &&  grid[i][j]!='0'){
//                     count++;
//                     Travel(grid,i,j,visited);
//                 }
//             }
//         }
        
//         return count;
        
//     }
// };