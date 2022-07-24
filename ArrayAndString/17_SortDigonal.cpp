// class Solution
// {
// public:
//     vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
//     {

//         unordered_map<int, priority_queue<int, vector<int>, greater<int>>> map;

//         for (int i = 0; i < mat.size(); i++)
//         {
//             for (int j = 0; j < mat[0].size(); j++)
//             {
//                 map[i - j].push(mat[i][j]);
//             }
//         }

//         for (int i = 0; i < mat.size(); i++)
//         {
//             for (int j = 0; j < mat[0].size(); j++)
//             {
//                 mat[i][j] = map[i - j].top();
//                 map[i - j].pop();
//             }
//         }

//         return mat;
//     }
// };