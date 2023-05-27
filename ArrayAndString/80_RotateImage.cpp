// class Solution
// {
// public:
//     void transpose(vector<vector<int>> &matrix)
//     {

//         int n = matrix.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 int temp = matrix[i][j];
//                 matrix[i][j] = matrix[j][i];
//                 matrix[j][i] = temp;
//             }
//         }
//     }

//     void reverseRow(vector<vector<int>> &matrix)
//     {

//         int n = matrix.size();
//         for (int i = 0; i < n; i++)
//         {

//             int j = 0;
//             int k = n - 1;
//             while (j < k)
//             {
//                 int temp = matrix[i][j];
//                 matrix[i][j] = matrix[i][k];
//                 matrix[i][k] = temp;
//                 j++;
//                 k--;
//             }
//         }
//     }

//     void rotate(vector<vector<int>> &matrix)
//     {
//         transpose(matrix);
//         reverseRow(matrix);
//     }
// };