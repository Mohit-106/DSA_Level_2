// class Solution
// {
// public:
//     int divide(int dividend, int divisor)
//     {

//         if (dividend == INT_MIN && divisor == -1)
//         {
//             return INT_MAX;
//         }

//         long long a = abs(dividend);
//         long long b = abs(divisor);
//         int ans = 0;

//         while (b <= a)
//         {

//             long long count = 0;
//             while (a > (b << count + 1LL))
//             {
//                 count++;
//             }

//             ans += 1LL << count;
//             a -= b << count;
//         }

//         if (dividend < 0 && divisor < 0)
//         {
//             return ans;
//         }

//         if (dividend < 0 || divisor < 0)
//         {
//             return (-1LL * ans);
//         }

//         return ans;
//     }
// };