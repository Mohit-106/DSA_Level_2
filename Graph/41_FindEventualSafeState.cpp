// class Solution
// {
// public:
//     bool dfs(vector<vector<int>> &graph, vector<int> &visited, int src)
//     {

//         if (visited[src] == 2)
//         {
//             return true;
//         }
//         else if (visited[src] == 1)
//         {
//             return false; // cycle detected
//         }
//         else
//         {
//             visited[src] = 1;
//             for (int nbr : graph[src])
//             {
//                 bool check = dfs(graph, visited, nbr);
//                 if (check == false)
//                 {
//                     return false;
//                 }
//             }
//             visited[src] = 2;
//             return true;
//         }
//     }
//     vector<int> eventualSafeNodes(vector<vector<int>> &graph)
//     {
//         vector<int> res;
//         vector<int> visited(graph.size());

//         for (int i = 0; i < graph.size(); i++)
//         {
//             if (visited[i] == 0)
//             {
//                 dfs(graph, visited, i);
//             }
//         }

//         for (int i = 0; i < visited.size(); i++)
//         {
//             if (visited[i] == 2)
//             {
//                 res.push_back(i);
//             }
//         }

//         return res;
//     }
// };