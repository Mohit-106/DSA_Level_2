//Hint : first identify all the boundary cells store its indexes in an array and the apply color in the grid
//Dont try to manipulate grid during dfs or bfs it will not work
// My BFS Solution
// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int i, j, val;
//         Pair(int i, int j, int val)
//         {
//             this->i = i;
//             this->j = j;
//             this->val = val;
//         }
//     };
//     vector<Pair *> res;
//     void addtoqueue(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int val, int color, int previ, int prevj, queue<Pair *> &q, int oc)
//     {
//         if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != oc)
//         {
//             Pair *newpr = new Pair(previ, prevj, 0);
//             res.push_back(newpr);
//             return;
//         }
//         else if (visited[i][j] == true)
//         {
//             return;
//         }
//         Pair *newpair = new Pair(i, j, grid[i][j]);
//         q.push(newpair);
//     }
//     vector<vector<int>> colorBorder(vector<vector<int>> &grid, int row, int col, int color)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         int oc = grid[row][col];
//         vector<vector<bool>> visited(n, vector<bool>(m));
//         queue<Pair *> q;
//         Pair *newpair = new Pair(row, col, grid[row][col]);
//         q.push(newpair);
//         while (q.size() > 0)
//         {
//             Pair *top = q.front();
//             q.pop();
//             if (visited[top->i][top->j] == true)
//             {
//                 continue;
//             }
//             visited[top->i][top->j] = true;
//             addtoqueue(grid, visited, top->i + 1, top->j, top->val, color, top->i, top->j, q, oc);
//             addtoqueue(grid, visited, top->i - 1, top->j, top->val, color, top->i, top->j, q, oc);
//             addtoqueue(grid, visited, top->i, top->j + 1, top->val, color, top->i, top->j, q, oc);
//             addtoqueue(grid, visited, top->i, top->j - 1, top->val, color, top->i, top->j, q, oc);
//         }
//         for (Pair *pr : res)
//         {
//             grid[pr->i][pr->j] = color;
//         }
//         return grid;
//     }
// };
// BFS by summet sir
// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int i, j;
//         bool atEdge;
//         Pair(int i, int j, bool atEdge)
//         {
//             this->i = i;
//             this->j = j;
//             this->atEdge = atEdge;
//         }
//     };
//     bool checkForboundary(vector<vector<int>> &grid, int i, int j)
//     {
//         if (i == 0 || j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1)
//         {
//             return true;
//         }
//         else
//         {
//             int color = grid[i][j];
//             if (grid[i + 1][j] == color && grid[i - 1][j] == color && grid[i][j + 1] == color && grid[i][j - 1] == color)
//             {
//                 return false;
//             }
//             else
//             {
//                 return true;
//             }
//         }
//     }
//     void addnbrs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int oc, queue<Pair *> &q)
//     {
//         if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != oc)
//         {
//             return;
//         }
//         Pair *newpr = new Pair(i, j, checkForboundary(grid, i, j));
//         q.push(newpr);
//     }
//     vector<vector<int>> colorBorder(vector<vector<int>> &grid, int row, int col, int color)
//     {
//         vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size()));
//         vector<Pair *> result;
//         queue<Pair *> q;
//         int oc = grid[row][col];
//         Pair *newpair = new Pair(row, col, checkForboundary(grid, row, col));
//         q.push(newpair);
//         while (q.size() > 0)
//         {
//             Pair *top = q.front();
//             q.pop();
//             if (visited[top->i][top->j] == true)
//             {
//                 continue;
//             }
//             visited[top->i][top->j] = true;
//             if (top->atEdge)
//             {
//                 Pair *pr = new Pair(top->i, top->j, false);
//                 result.push_back(pr);
//             }
//             addnbrs(grid, visited, top->i + 1, top->j, oc, q);
//             addnbrs(grid, visited, top->i - 1, top->j, oc, q);
//             addnbrs(grid, visited, top->i, top->j + 1, oc, q);
//             addnbrs(grid, visited, top->i, top->j - 1, oc, q);
//         }
//         for (Pair *pr : result)
//         {
//             grid[pr->i][pr->j] = color;
//         }
//         return grid;
//     }
// };
// DFS

