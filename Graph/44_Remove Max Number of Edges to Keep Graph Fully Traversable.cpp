// class Solution {
// public:
    
//     int find(int x, vector<int>&par){
//         if(x==par[x]){
//             return x;
//         }
//         par[x]=find(par[x],par);
//         return par[x];
//     }
    
//     bool merge(int x, int y, vector<int>&par, vector<int>&rank){
//         int X = find(x,par);
//         int Y = find(y,par);
//         if(X==Y){
//             return false;
//         }
        
//         if(rank[X]>rank[Y]){
//             par[Y]=X;
//         }else if(rank[Y]>rank[X]){
//             par[X]=Y;
//         }else{
//             par[X]=Y;
//             rank[Y]++;
//         }
//         return true;
        
//     }
    
    
//     int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
//         vector<int>par(n+1);
//         vector<int>rank(n+1);
//         for(int i=0;i<n+1;i++){
//             par[i]=i;
//             rank[i]=0;
//         }
        
//         int removals=0;
//         int e1=0;
//         int e2=0;
        
//         for(vector<int>& edge : edges){
//             int type = edge[0];
//             int u = edge[1];
//             int v = edge[2];
//             if(type==3){
                
//                 bool flag = merge(u,v,par,rank);
//                 if(flag==false){
//                     removals++;
//                 }else{
//                     e1++;
//                     e2++;
//                 }
                
//             }
//         }
        
        
//         vector<int>par2 = par;
//         vector<int>rank2=rank;
//         for(vector<int>& edge : edges){
//             int type = edge[0];
//             int u = edge[1];
//             int v = edge[2];
//             if(type==2){
//                 bool flag = merge(u,v,par2,rank2);
//                 if(flag==false){
//                     removals++;
//                 }else{
//                     e2++;
//                 }
//             }
//         }
        
//         vector<int>par1= par;
//         vector<int>rank1=rank;
//         for(vector<int>& edge : edges){
//             int type = edge[0];
//             int u = edge[1];
//             int v = edge[2];
//             if(type==1){
                
//                 bool flag = merge(u,v,par1,rank1);
//                 if(flag==false){
//                     removals++;
//                 }else{
//                     e1++;
//                 }
                
//             }
//         }
//         if(e1!=n-1 || e2!=n-1){
//             return -1;
//         }
//         return removals;
//     }
// };