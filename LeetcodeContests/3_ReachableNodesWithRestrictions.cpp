// class Solution
// {
// public:
//     int count = 0;
//     void dfs(int src, vector<vector<int>> &graph, vector<bool> &visited)
//     {
//         visited[src] = true;
//         count++;
//         for (int nbr : graph[src])
//         {
//             if (visited[nbr] == false)
//             {
//                 dfs(nbr, graph, visited);
//             }
//         }
//     }
//     int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
//     {
//         vector<vector<int>> graph(n, vector<int>());
//         for (vector<int> &edge : edges)
//         {
//             int src = edge[0];
//             int nbr = edge[1];
//             graph[src].push_back(nbr);
//             graph[nbr].push_back(src);
//         }
//         vector<bool> visited(n - 1);
//         for (int val : restricted)
//         {
//             visited[val] = true;
//         }
//         dfs(0, graph, visited);
//         return count;
//     }
// };