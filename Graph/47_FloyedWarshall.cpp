// //imd - intermediate
// class Solution
// {
// public:
//     void shortest_distance(vector<vector<int>> &matrix)
//     {
//         for (int imd = 0; imd < matrix.size(); imd++)
//         {
//             for (int i = 0; i < matrix.size(); i++)
//             {
//                 for (int j = 0; j < matrix.size(); j++)
//                 {
//                     if (matrix[i][imd] == -1)
//                     {
//                         continue;
//                     }
//                     else if (matrix[imd][j] == -1)
//                     {
//                         continue;
//                     }
//                     else if (matrix[i][j] == -1)
//                     {
//                         matrix[i][j] = matrix[i][imd] + matrix[imd][j];
//                     }
//                     else
//                     {
//                         matrix[i][j] = min((matrix[i][imd] + matrix[imd][j]), matrix[i][j]);
//                     }
//                 }
//             }
//         }
//     }
// };