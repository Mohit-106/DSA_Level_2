// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int i, j, level;
//         Pair(int i, int j, int level)
//         {

//             this->i = i;
//             this->j = j;
//             this->level = level;
//         }
//     };

//     void DFS(queue<Pair *> &q, vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j)
//     {
//         if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited[i][j] == true || grid[i][j] == 0)
//         {
//             return;
//         }

//         visited[i][j] = true;
//         Pair *newpair = new Pair(i, j, 0);
//         q.push(newpair);
//         DFS(q, grid, visited, i + 1, j);
//         DFS(q, grid, visited, i - 1, j);
//         DFS(q, grid, visited, i, j + 1);
//         DFS(q, grid, visited, i, j - 1);
//     }

    // void addnbr(vector<vector<int>> &grid, vector<vector<bool>> &visited2, vector<vector<bool>> &visited1, int i, int j, int level, queue<Pair *> &q)
    // {

    //     if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited2[i][j] == true)
    //     {
    //         return;
    //     }
    //     else if (visited1[i][j] == true)
    //     {
    //         return;
    //     }

    //     Pair *newpair = new Pair(i, j, level);
    //     q.push(newpair);
    // }

//     int shortestBridge(vector<vector<int>> &grid)
//     {
//         queue<Pair *> q;
//         vector<vector<bool>> visited1(grid.size(), vector<bool>(grid[0].size()));
//         bool flag = false;
//         for (int i = 0; i < grid.size(); i++)
//         {
//             for (int j = 0; j < grid[i].size() - 1; j++)
//             {

//                 if (grid[i][j] == 1)
//                 {
//                     DFS(q, grid, visited1, i, j);
//                     flag = true;
//                     break;
//                 }
//             }
//             if (flag == true)
//             {
//                 break;
//             }
//         }

//         vector<vector<bool>> visited2(grid.size(), vector<bool>(grid[0].size()));

//         while (q.size() > 0)
//         {
//             Pair *top = q.front();
//             q.pop();
//             if (visited2[top->i][top->j] == true)
//             {
//                 continue;
//             }
//             visited2[top->i][top->j] = true;
//             if (grid[top->i][top->j] == 1 && visited1[top->i][top->j] == false)
//             {
//                 return top->level - 1;
//             }

//             addnbr(grid, visited2, visited1, top->i + 1, top->j, top->level + 1, q);
//             addnbr(grid, visited2, visited1, top->i - 1, top->j, top->level + 1, q);
//             addnbr(grid, visited2, visited1, top->i, top->j + 1, top->level + 1, q);
//             addnbr(grid, visited2, visited1, top->i, top->j - 1, top->level + 1, q);
//         }

//         return -1;
//     }
// };