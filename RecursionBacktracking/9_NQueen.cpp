// class Solution
// {
// public:
//     vector<vector<string>> res;

//     bool IsQueenSafe(vector<string> &ans, int row, int col)
//     {

//         for (int i = row - 1; i >= 0; i--)
//         {
//             if (ans[i][col] == 'Q')
//                 return false;
//         }

//         for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
//         {
//             if (ans[i][j] == 'Q')
//                 return false;
//         }

//         for (int i = row - 1, j = col + 1; i >= 0 && j < ans.size(); i--, j++)
//         {
//             if (ans[i][j] == 'Q')
//                 return false;
//         }

//         return true;
//     }

//     void helper(vector<string> &ans, int n, int row)
//     {
//         if (row == n)
//         {
//             res.push_back(ans);
//             return;
//         }

//         for (int col = 0; col < n; col++)
//         {
//             if (IsQueenSafe(ans, row, col))
//             {
//                 ans[row][col] = 'Q';
//                 helper(ans, n, row + 1);
//                 ans[row][col] = '.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n)
//     {
//         vector<string> ans(n, string(n, '.'));
//         helper(ans, n, 0);
//         return res;
//     }
// };