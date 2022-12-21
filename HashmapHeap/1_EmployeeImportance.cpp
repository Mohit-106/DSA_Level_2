// /*
// // Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };
// */

// class Solution {
// public:
//     int bfs(unordered_map<int,vector<int>>&tree,unordered_map<int,int>&imp,int id){

//         vector<int> children = tree[id];
//         int cimp = 0;
//         for( int child : children){
//           cimp+= bfs(tree,imp,child);
//         }
//         return cimp+imp[id];

//     }
    
//     int getImportance(vector<Employee*> employees, int id) {

//         unordered_map<int,vector<int>>tree;
//         unordered_map<int,int>imp;

//         for(Employee * val: employees){
//             tree[val->id] = val->subordinates;
//             imp[val->id] = val->importance;
//         }

//         int ans = bfs(tree,imp,id);
//         return ans;
//     }
// };