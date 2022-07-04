// class Solution
// {
// public:
//     // Function to find if the given edge is a bridge in graph.
//     int flag = 0;
//     int distance = 0;
//     void dfs(vector<int> adj[], vector<bool> &visited, vector<int> &dis, vector<int> &low, int c, int d, int src, int par)
//     {

//         visited[src] = true;
//         dis[src] = low[src] = distance++;
//         for (int nbr : adj[src])
//         {
//             if (nbr == par)
//             {
//                 continue;
//             }
//             else if (visited[nbr] == true)
//             {
//                 low[src] = min(low[src], dis[nbr]);
//             }
//             else
//             {

//                 dfs(adj, visited, dis, low, c, d, nbr, src);
//                 low[src] = min(low[src], low[nbr]);
//                 if ((c == src && d == nbr) || (c == nbr && d == src))
//                 {
//                     if (dis[src] < low[nbr])
//                     {
//                         flag = 1;
//                         return;
//                     }
//                 }
//             }
//         }
//     }

//     int isBridge(int V, vector<int> adj[], int c, int d)
//     {
//         vector<bool> visited(V);
//         vector<int> dis(V);
//         vector<int> low(V);
//         for (int i = 0; i < V; i++)
//         {
//             if (visited[i] == false)
//             {
//                 dfs(adj, visited, dis, low, c, d, i, -1);
//             }
//         }
//         return flag;
//     }
// };
