// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int i, j, ele;
//         Pair(int i, int j, int ele)
//         {
//             this->i = i;
//             this->j = j;
//             this->ele = ele;
//         }
//     };

//     class comp
//     {
//     public:
//         bool operator()(Pair *const &a, Pair *const &b) const
//         {
//             return a->ele > b->ele;
//         }
//     };

//     void addtopq(int i, int j, int ele, vector<vector<bool>> &visited, priority_queue<Pair *, vector<Pair *>, comp> &pq, vector<vector<int>> &grid)
//     {
//         if (i < 0 || j < 0 || i >= visited.size() || j >= visited.size() || visited[i][j] == true)
//         {
//             return;
//         }
//         int maxele = max(ele, grid[i][j]);
//         Pair *newpr = new Pair(i, j, maxele);
//         pq.push(newpr);
//     }

//     int swimInWater(vector<vector<int>> &grid)
//     {

//         vector<vector<bool>> visited(grid.size(), vector<bool>(grid.size()));
//         priority_queue<Pair *, vector<Pair *>, comp> pq;
//         Pair *newpair = new Pair(0, 0, grid[0][0]);
//         pq.push(newpair);

//         while (pq.size() > 0)
//         {
//             Pair *top = pq.top();
//             pq.pop();
//             if (visited[top->i][top->j] == true)
//             {
//                 continue;
//             }
//             visited[top->i][top->j] = true;
//             if (top->i == grid.size() - 1 && top->j == grid.size() - 1)
//             {
//                 return top->ele;
//             }

//             addtopq(top->i + 1, top->j, top->ele, visited, pq, grid);
//             addtopq(top->i - 1, top->j, top->ele, visited, pq, grid);
//             addtopq(top->i, top->j + 1, top->ele, visited, pq, grid);
//             addtopq(top->i, top->j - 1, top->ele, visited, pq, grid);
//         }

//         return -1;
//     }
// };