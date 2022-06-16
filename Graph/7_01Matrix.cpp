// class Solution {
// public:
//     class Pair{
//         public:
//         int i;
//         int j;
//         int dis;
//         Pair(int i, int j , int dis){
//             this->i=i;
//             this->j=j;
//             this->dis=dis;
            
//         }
        
        
//     };
//     void addtoqueue(int i , int j , int dis, vector<vector<int>>&mat,queue<Pair*>&q,vector<vector<bool>>&visited){
        
//         if( i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || visited[i][j]==true || mat[i][j]==0 ){
//             return;
//         }
//         Pair * newpair = new Pair(i,j,dis);
//         q.push(newpair);
        
        
//     }
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
//         vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size()));
//         vector<vector<bool>>visited(mat.size(),vector<bool>(mat[0].size()));
//         queue<Pair*>q;
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[i].size();j++){
//                 if(mat[i][j]==0){
//                     Pair * newpair = new Pair(i,j,0);
//                     q.push(newpair);
//                 }
//             }
//         }
        
//         while(q.size()>0){
//             Pair * top = q.front();
//             q.pop();
//             if(visited[top->i][top->j] == true){
//                 continue;
//             }
//             visited[top->i][top->j]=true;
//             ans[top->i][top->j]=top->dis;
//             addtoqueue(top->i+1,top->j,top->dis+1,mat,q,visited);
//             addtoqueue(top->i-1,top->j,top->dis+1,mat,q,visited);
//             addtoqueue(top->i,top->j+1,top->dis+1,mat,q,visited);
//             addtoqueue(top->i,top->j-1,top->dis+1,mat,q,visited);
            
            
//         }
//         return ans;
        
        
        
        
        
//     }
// };