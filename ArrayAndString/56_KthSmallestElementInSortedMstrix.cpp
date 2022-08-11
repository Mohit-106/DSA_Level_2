// class Solution
// {
// public:
//     int kthSmallest(vector<vector<int>> &matrix, int k)
//     {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int lo = matrix[0][0];
//         int hi = matrix[n - 1][m - 1];

//         while (lo < hi)
//         {
//             int mid = lo + (hi - lo) / 2;
//             int ltem = 0; // less than equal to mid
//             int j = m - 1;
//             for (int i = 0; i < n; i++)
//             {
//                 while (j >= 0 && matrix[i][j] > mid)
//                 {
//                     j--;
//                 }
//                 ltem += (j + 1);
//             }

//             if (ltem < k)
//             {
//                 // case when less numbers are less than mid
//                 lo = mid + 1;
//             }
//             else
//             {    
//                 // case where eqaul to or more
//                 hi = mid;
//             }
//         }

//         return lo;
//     }
// };