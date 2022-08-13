// class Solution {
// public:
//     class Pair{
//         public:
//         int i,j,dis;
//         Pair(int i , int j , int dis){
//             this->i = i;
//             this->j=j;
//             this->dis=dis;
//         }

//     };
//     void addtoqueue(int i , int j , int dis, vector<vector<int>>&mat,queue<Pair*>&q,vector<vector<bool>>&visited){

//       if( i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || visited[i][j]==true || mat[i][j]==1 ){
//             return;
//         }
//         Pair * newpair = new Pair(i,j,dis);
//         q.push(newpair);

//          }
//     int maxDistance(vector<vector<int>>& grid) {

//         vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size()));
//         queue<Pair*>q;
//         int countofZeros=0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(grid[i][j]==1){
//                     Pair * newpair = new Pair(i,j,0);
//                     q.push(newpair);
//                 }else{
//                     countofZeros++;
//                 }
//             }
//         }

//         if(countofZeros == 0 || q.size()==0){
//             return -1;
//         }

//         int maxdis = 0;
//         while(q.size()>0){
//             Pair * top = q.front();
//             q.pop();
//             if(visited[top->i][top->j]==true){
//                 continue;
//             }
//             visited[top->i][top->j]=true;
//             maxdis=top->dis;
//             addtoqueue(top->i+1,top->j,top->dis+1,grid,q,visited);
//             addtoqueue(top->i-1,top->j,top->dis+1,grid,q,visited);
//             addtoqueue(top->i,top->j+1,top->dis+1,grid,q,visited);
//             addtoqueue(top->i,top->j-1,top->dis+1,grid,q,visited);

//         }
//         return maxdis;

//     }
// };