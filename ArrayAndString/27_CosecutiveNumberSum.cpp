// class Solution
// {
// public:
//     int consecutiveNumbersSum(int n)
//     {
//         // k are numbers which can form target sum i.e == n
//         int k = 1;
//         int check = k * (k - 1) / 2; // this sum of the numbers
//         int res = 0;
//         while (n > check)
//         {
//             // n-check == s (starting number)
//             if ((n - check) % k == 0)
//             {
//                 res++;
//             }
//             k++;
//             check = k * (k - 1) / 2;
//         }

//         return res;
//     }
// };