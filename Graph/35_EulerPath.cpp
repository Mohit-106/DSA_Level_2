//2 vertices has odd degree
// class Solution{
// public:
//     int eulerPath(int N, vector<vector<int>> graph){
//         int count = 0;
//         for(int i=0;i<N;i++){
//             int size = 0;
//             for(int j=0;j<N;j++){
//                 if(i!=j && graph[i][j]==1){
//                     size++;
//                 }
//             }
//             if(size%2==1){
//                 count++;
//             }
//         }
//         if(count ==0 || count ==2) return 1;
//         else return 0;
//     }
// };