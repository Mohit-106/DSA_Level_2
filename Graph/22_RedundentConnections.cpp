// class Solution
// {
// public:
//     int find(int x, vector<int> &par, vector<int> &rank)
//     {
//         if (par[x] == x)
//         {
//             return x;
//         }
//         par[x] = find(par[x], par, rank);
//         return par[x];
//     }
//     void merge(int a, int b, vector<int> &par, vector<int> &rank)
//     {

//         if (rank[a] > rank[b])
//         {
//             par[b] = a;
//         }
//         else if (rank[a] < rank[b])
//         {
//             par[a] = b;
//         }
//         else
//         {
//             par[a] = b;
//             rank[a]++;
//         }
//     }
//     vector<int> findRedundantConnection(vector<vector<int>> &edges)
//     {
//         vector<int> par(edges.size() + 1);
//         vector<int> rank(edges.size() + 1);
//         for (int i = 0; i < edges.size(); i++)
//         {
//             par[i] = i;
//         }

//         for (vector<int> &e : edges)
//         {
//             int lead1 = find(e[0], par, rank);
//             int lead2 = find(e[1], par, rank);

//             if (lead1 != lead2)
//             {
//                 merge(lead1, lead2, par, rank);
//             }
//             else
//             {
//                 return e;
//             }
//         }
//         vector<int> res;
//         return res;
//     }
// };