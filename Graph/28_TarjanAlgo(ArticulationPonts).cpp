// find Brdges vertices in grapg
// class Solution
// {
// public:
//     int time = 0;
//     void dfs(vector<int> adj[], vector<bool> &visited, set<int> &aps, vector<int> &low, vector<int> &dis, int src, int par)
//     {
//         visited[src] = true;
//         dis[src] = low[src] = ++time;
//         int c = 0; // we are counting child for only root
//         for (int nbr : adj[src])
//         {
//             if (nbr == par)
//             {
//                 continue;
//             }
//             else if (visited[nbr])
//             {
//                 low[src] = min(low[src], dis[nbr]);
//             }
//             else
//             {
//                 c++;
//                 dfs(adj, visited, aps, low, dis, nbr, src);
//                 low[src] = min(low[src], low[nbr]);
//                 if (par != -1 && low[nbr] >= dis[src])
//                 {
//                     aps.insert(src);
//                 }
//             }
//         }
//         // case for root
//         if (par == -1 && c > 1)
//         {
//             aps.insert(src);
//         }
//     }
//     vector<int> articulationPoints(int V, vector<int> adj[])
//     {
//         vector<bool> visited(V);
//         set<int> aps;
//         vector<int> low(V);
//         vector<int> dis(V);
//         for (int i = 0; i < V; i++)
//         {
//             if (visited[i] == false)
//             {
//                 dfs(adj, visited, aps, low, dis, i, -1);
//             }
//         }
//         vector<int> res(aps.size());
//         if (aps.size() == 0)
//         {
//             vector<int> noaps(1, -1);
//             return noaps;
//         }
//         int idx = 0;
//         for (int i : aps)
//         {
//             res[idx] = i;
//             idx++;
//         }
//         return res;
//     }
// };
// // { Driver Code Starts.
// int main()
// {
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         vector<int> ans = obj.articulationPoints(V, adj);
//         for (auto i : ans)
//             cout << i << " ";
//         cout << "\n";
//     }
//     return 0;
// }