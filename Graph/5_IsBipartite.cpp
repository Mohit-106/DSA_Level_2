//DFS
// class Solution {
// public:
//     bool flag = true;
    
//     void DFS(vector<vector<int>>&graph, vector<int>&visited, int src , int color){
        
//         visited[src]=color;
//         for(int nbr : graph[src]){
            
//             if(visited[nbr]==0){
//                 DFS(graph,visited,nbr,color*-1);
//             }else{
                
//                 int oc = visited[nbr];
//                 int nc = color*-1;
//                 if(oc!=nc){
//                     flag = false;
//                     return;
//                 }
                
//             }
            
//         }
        
//     }
    
    
    
//     bool isBipartite(vector<vector<int>>& graph) {
        
//         vector<int>visited(graph.size(),0);
//         for(int i=0;i<graph.size();i++){
//             if(visited[i]==0){
//                 DFS(graph,visited,i,1);
//                 if(flag==false){
//                     return false;
//                 }
//             }
//         }
        
//         return true;
        
        
//     }
// };


//BFS

// class Solution {
// public:
    
//     class Pair{
//         public:
//         int src;
//         int color;
//         Pair(int src , int color){
//             this->src = src;
//             this->color = color;
//         }
//     };
    
//     bool BFS(vector<vector<int>>&graph, vector<int>&visited, int src,int color){
        
//         queue<Pair*>q;
//         Pair * newpair = new Pair(src,color);
//         q.push(newpair);
//         while(!q.empty()){
//             Pair * top = q.front();
//             q.pop();
//             if(visited[top->src]!=0){
                
//                 int oc = visited[top->src];
//                 if(oc!=top->color){
//                     return false;
//                 }
                
//             }
//             visited[top->src]=top->color;
//             for(int nbr : graph[top->src]){
//                 if(visited[nbr]==0){
                    
//                     Pair * nbrpair = new Pair(nbr,top->color*-1);
//                     q.push(nbrpair);
                    
//                 }
//             }
            
//         }
        
//         return true;
        
//     }
    
    
//     bool isBipartite(vector<vector<int>>& graph) {
//         vector<int>visited(graph.size(),0);
//         for(int i=0;i<graph.size();i++){
//             if(visited[i]==0){
//                 if(BFS(graph,visited,i,1)==false){
//                     return false;
//                 }  
//             }
//         }
        
//         return true;
        
        
//     }
// };