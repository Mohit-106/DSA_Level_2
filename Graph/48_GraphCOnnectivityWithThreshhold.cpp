// class Solution
// {
// public:
//     int find(int x, vector<int> &par)
//     {
//         if (x == par[x])
//         {
//             return x;
//         }
//         par[x] = find(par[x], par);
//         return par[x];
//     }
//     void merge(int x, int y, vector<int> &par, vector<int> &rank)
//     {
//         int a = find(x, par);
//         int b = find(y, par);
//         if (a == b)
//             return;
//         if (rank[a] > rank[b])
//         {
//             par[b] = a;
//         }
//         else if (rank[b] > rank[a])
//         {
//             par[a] = b;
//         }
//         else
//         {
//             par[a] = b;
//             rank[b]++;
//         }
//     }
//     vector<bool> areConnected(int n, int threshold, vector<vector<int>> &queries)
//     {
//         vector<int> par(n + 1);
//         vector<int> rank(n + 1);
//         for (int i = 0; i < n + 1; i++)
//         {
//             par[i] = i;
//             rank[i] = 0;
//         }
//         for (int div = threshold + 1; div <= n; div++)
//         {
//             for (int m = 1; div * m <= n; m++)
//             {
//                 merge(div, div * m, par, rank);
//             }
//         }
//         vector<bool> res;
//         for (int i = 0; i < queries.size(); i++)
//         {
//             bool check = find(queries[i][0], par) == find(queries[i][1], par);
//             res.push_back(check);
//         }
//         return res;
//     }
// };