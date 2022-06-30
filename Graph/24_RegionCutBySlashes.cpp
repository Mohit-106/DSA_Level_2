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
//         if (rank[x] > rank[y])
//         {
//             par[y] = x;
//         }
//         else if (rank[y] > rank[x])
//         {
//             par[x] = y;
//         }
//         else
//         {
//             par[x] = y;
//             rank[y]++;
//         }
//     }

//     void unionHelper(int x, int y, vector<int> &par, vector<int> &rank)
//     {

//         int xlead = find(x, par);
//         int ylead = find(y, par);
//         if (xlead != ylead)
//         {
//             merge(xlead, ylead, par, rank);
//         }
//     }

//     int regionsBySlashes(vector<string> &grid)
//     {
//         int n = 4 * grid.size() * grid[0].size();

//         vector<int> par(n);
//         vector<int> rank(n);
//         for (int i = 0; i < n; i++)
//         {
//             par[i] = i;
//         }

//         for (int i = 0; i < grid.size(); i++)
//         {
//             for (int j = 0; j < grid[0].size(); j++)
//             {

//                 int cell = i * grid[0].size() + j;

//                 int cellp1 = (cell)*4;
//                 int cellp2 = (cell * 4) + 1;
//                 int cellp3 = ((cell)*4) + 2;
//                 int cellp4 = ((cell)*4) + 3;

//                 if (grid[i][j] != '/')
//                 {

//                     unionHelper(cellp1, cellp2, par, rank);
//                     unionHelper(cellp3, cellp4, par, rank);
//                 }
//                 if (grid[i][j] != '\\')
//                 {
//                     unionHelper(cellp1, cellp4, par, rank);
//                     unionHelper(cellp3, cellp2, par, rank);
//                 }

//                 if (j < grid[0].size() - 1)
//                 {

//                     int rightCell = i * grid[0].size() + j + 1;
//                     int rightCell4 = rightCell * 4 + 3;
//                     unionHelper(cellp2, rightCell4, par, rank);
//                 }

//                 if (i < grid.size() - 1)
//                 {
//                     int downCell = (i + 1) * grid[0].size() + j;
//                     int downCell1 = downCell * 4;
//                     unionHelper(cellp3, downCell1, par, rank);
//                 }
//             }
//         }

//         int count = 0;
//         for (int i = 0; i < par.size(); i++)
//         {
//             if (par[i] == i)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };