// class Solution {
//   public:
  
//     unordered_set<string>s;
//     void countDistinctIslandsHelper(vector<vector<int>>&grid, vector<vector<int>>&visited, int n, int m , string &str, int i, int j){
        
//         if( i<0 || i>=n || j<0 || j>=m || visited[i][j]==1 || grid[i][j]==0){
//             return;
//         }
//         visited[i][j] = 1;
//         // ans+=str;
//         countDistinctIslandsHelper(grid,visited,n,m,str.append("r"),i,j+1);
//         countDistinctIslandsHelper(grid,visited,n,m,str.append("l"),i,j-1);
//         countDistinctIslandsHelper(grid,visited,n,m,str.append("d"),i+1,j);
//         countDistinctIslandsHelper(grid,visited,n,m,str.append("u"),i-1,j);
        
//     }
    
    
//     int countDistinctIslands(vector<vector<int>>& grid) {
        
//         int n = grid.size();
//         int m = grid[0].size();
//         string str;
//         vector<vector<int>>visited(n,vector<int>(m));
//         int count = 0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(visited[i][j]==0 && grid[i][j]==1){
//                     str="";
//                     countDistinctIslandsHelper(grid,visited,n,m,str,i,j);
//                     s.insert(str);
//                 }
//             }
//         }
        
//         return s.size();
        
        
        
        
//     }
// };