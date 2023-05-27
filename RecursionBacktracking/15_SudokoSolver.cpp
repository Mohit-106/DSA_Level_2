// class Solution
// {
// public:
//     bool isvalid(vector<vector<char>> &board, int i, int j, char ch, int n)
//     {

//         for (int col = 0; col < n; col++)
//         {
//             if (board[i][col] == ch)
//             {
//                 return false;
//             }
//         }

//         for (int row = 0; row < n; row++)
//         {
//             if (board[row][j] == ch)
//             {
//                 return false;
//             }
//         }

//         int idx = 3 * (i / 3);
//         int jdx = 3 * (j / 3);
//         for (int k = 0; k < 3; k++)
//         {
//             for (int l = 0; l < 3; l++)
//             {
//                 if (board[k + idx][l + jdx] == ch)
//                 {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }

//     bool helper(vector<vector<char>> &board, int n, int i, int j)
//     {

//         if (i == n)
//         {
//             return true;
//         }

//         int ni = 0;
//         int nj = 0;

//         if (j == n - 1)
//         {
//             ni = i + 1;
//             nj = 0;
//         }
//         else
//         {
//             ni = i;
//             nj = j + 1;
//         }

//         bool check;

//         if (board[i][j] == '.')
//         {
//             for (char k = '1'; k <= '9'; k++)
//             {
//                 if (isvalid(board, i, j, k, n))
//                 {
//                     board[i][j] = k;
//                     check = helper(board, n, ni, nj);
//                     if (check == true)
//                     {
//                         return true;
//                     }
//                     board[i][j] = '.';
//                 }
//             }
//         }
//         else
//         {
//             check = helper(board, n, ni, nj);
//             if (check == true)
//                 return true;
//         }
//         return false;
//     }

//     void solveSudoku(vector<vector<char>> &board)
//     {
//         int n = board.size();
//         helper(board, n, 0, 0);
//     }
// };