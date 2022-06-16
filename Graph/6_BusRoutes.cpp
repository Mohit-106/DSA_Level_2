//14th june class(2nd question)

//BFS
// class Solution {
// public:
//     class Pair{
//         public:
//         int bus;
//         int csf;
//         Pair(int bus , int csf){
//             this->bus = bus;
//             this->csf=csf;
//         }
        
//     };
//     int numBusesToDestination(vector<vector<int>>& routes, int src, int target) {
//         if(target == src){
//             return 0;
//         }
//         unordered_map<int,vector<int>>mp;
//         for(int bus = 0; bus<routes.size();bus++){
//             for(int route : routes[bus]){
//                 if(mp.find(route)==mp.end()){
//                     mp[route]=vector<int>();
//                 }
//                 mp[route].push_back(bus);
//             }
//         }
//         queue<Pair*>q;
//         for(int bus : mp[src]){
//             Pair* source = new Pair(bus,1);
//             q.push(source);
//         }
//         vector<bool>visited(routes.size(),false);
//         while(q.size()>0){
//             Pair * top = q.front();
//             q.pop();
//             if(visited[top->bus]){
//                 continue;
//             }
//             visited[top->bus]=true;
            
            
//             for(int stop : routes[top->bus]){
//                 if(stop==target){
//                     return top->csf;
//                 }
//             }
            
//             for(int stops : routes[top->bus]){
//                 for(int busFornextStop : mp[stops]){
//                    if(visited[busFornextStop]==false){
                       
//                        Pair * newpair = new Pair(busFornextStop,top->csf+1);
//                        q.push(newpair);
                               
//                    }
//                 }
               
              
//             }
            
//         }
//         return -1; 
//     }
// };