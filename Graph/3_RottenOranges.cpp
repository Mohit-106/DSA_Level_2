
// class Pair {
//     public:
//     int x;
//     int y;
//     int t;
//     Pair(int x , int y, int t){
        
//         this->x=x;
//         this->y=y;
//         this->t=t;
        
//     }
    
// };

// class Solution {
// public:
//     void AddNeighbour(int i, int j, int t, queue<Pair*>&q, vector<vector<int>>& grid,vector<vector<bool>>&visited){
        
//         if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
//             return;
//         }else if(visited[i][j]==true){
//             return;
//         }else if(grid[i][j]==1){
            
//              Pair * newPair = new Pair(i,j,t);
//              q.push(newPair);
            
//         }
//     }
//     int orangesRotting(vector<vector<int>>& grid) {
        
//         queue<Pair*>q;
//         int fresh=0;
//         int time = 0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0; j< grid[i].size();j++){
//                 if(grid[i][j]==2){
//                     Pair * newpair = new Pair (i,j,0);
//                     q.push(newpair);
//                 }else if(grid[i][j]==1){
//                     fresh++;
//                 }
//             }
//         } 
//         vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
        
//         while(q.size()>0){
    
//             Pair * top = q.front();
//             q.pop();
//             if(visited[top->x][top->y]==true){
//                 continue;
//             }
//             if(grid[top->x][top->y]==1){
//                 fresh--;
//             }
//             if(top->t>time){
//                 time = top->t;
//             }
//             visited[top->x][top->y]=true;
//             AddNeighbour(top->x+1,top->y,top->t+1,q,grid,visited);
//             AddNeighbour(top->x-1,top->y,top->t+1,q,grid,visited);
//             AddNeighbour(top->x,top->y+1,top->t+1,q,grid,visited);
//             AddNeighbour(top->x,top->y-1,top->t+1,q,grid,visited);
            
          
//         }
//         if(fresh==0){
//             return time;
//         }else {
//             return -1;
//         }
        
        
        
//     }
// };