//DO parctice its code

// class Solution {
// public:
    
//     int find(int x, vector<int>&par){
//         if(x==par[x]){
//             return x;
//         }
//         par[x]=find(par[x],par);
//         return par[x];
//     }
    
//     void merge(int x, int y, vector<int>&par, vector<int>&rank,vector<int>&size){
        
//         int x1 = find(x,par);
//         int y1 = find(y,par);
//         if(x1==y1){
//             return;
//         }
        
//         if(rank[x1]>rank[y1]){
//             par[y1]=x1;
//             size[x1]+=size[y1];
//         }else if(rank[y1]>rank[x1]){
//             par[x1]=y1;
//             size[y1]+=size[x1];
//         }else{
//             par[x1]=y1;
//             size[y1]+=size[x1];
//             rank[y1]++;
//         }
        
//     }
    
//     vector<vector<int>>dir = {{0,-1},{1,0},{0,1},{-1,0}};
//     void handleUnionForAllNbrs(vector<vector<int>>& grid, int i , int j, vector<int>&par, vector<int>&rank, vector<int>&size){
//         int bno = i*n+j+1; //box no
//         for(vector<int> & d : dir){
//             int ni = i+d[0]; //nbrs
//             int nj = j+d[1]; //nbrs
            
//             if(ni>=0 && nj>=0 && ni<m && nj<n && grid[ni][nj]==1){
//                 int nbno = ni*n+nj+1; //nbr box number
//                 merge(bno,nbno,par,rank,size);
//             }
            
//             if(i==0){
//                  merge(0,bno,par,rank,size);
//             }
//         }
//     }
    
    
    
    
//     int n;
//     int m;
//     vector<int> hitBricks(vector<vector<int>>& grid, vector<vector<int>>& hits) {
//         m = grid.size();
//         n =grid[0].size();
//         vector<int>par(m* (n+1)); // we created one row extra 0th row will we considered as a roof
//         vector<int>rank(m* (n+1));
//         vector<int>size(m* (n+1));
//         for(int i=0;i<m*(n+1);i++){
//             par[i]=i;
//             size[i]=1;
//         }
        
//         //just broke briks first
//         //there may be given 0 as a hit brick which will not considered
//         for(vector<int> &hit : hits){
//             int x = hit[0];
//             int y = hit[1];
//             if(grid[x][y]==1){
//                 grid[x][y]=2;
//             }
//         }
            
//             for(int i=0;i<m;i++){
//                 for(int j=0;j<n;j++){
//                     if(grid[i][j]==1){
//                         handleUnionForAllNbrs(grid,i,j,par,rank,size);
//                     }
//                 }
//             }
            
            
//             vector<int>res(hits.size());
//             //re-created broken bricks
//             for(int i = hits.size()-1; i>=0; i--){
//                 int x = hits[i][0];
//                 int y = hits[i][1];
//                 if(grid[x][y]==2){
//                     int bricksin0 = size[find(0,par)];
//                     grid[x][y]=1 ;// recreated brick
//                     handleUnionForAllNbrs(grid,x,y,par,rank,size);
//                     int newbricksin0 = size[find(0,par)];
//                     if(newbricksin0>bricksin0){
//                         res[i]=newbricksin0-bricksin0-1;
//                     }
//                 }
//             }
//               return res;
        
//     }
// };