// class Solution
// {
// public:
//     int findKthNumber(int m, int n, int k)
//     {
//         int hi = m * n;
//         int lo = 1;

//         while (lo < hi)
//         {
//             // let mid be our potential answer
//             int mid = lo + (hi - lo) / 2;
//             int eltm = 0; // elements less than equal to mid
//             int j = n;
//             for (int i = 1; i <= m; i++)
//             {
//                 while (n > 0 && i * j > mid)
//                 {
//                     j--;
//                 }
//                 eltm += (j);
//             }
//             if (eltm < k)
//             {
//                 lo = mid + 1;
//             }
//             else
//             {
//                 hi = mid;
//             }
//         }
//         return hi;
//     }
// };