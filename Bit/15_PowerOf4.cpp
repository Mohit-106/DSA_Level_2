// class Solution
// {
// public:
//     bool isPowerOfFour(int n)
//     {
//         if (n <= 0)
//             return false;
//         long long zobit = 0;
//         for (int i = 0; i < 32; i += 2)
//         {
//             long long j = 1LL << i;
//             zobit = zobit | j;
//         }
//         cout << zobit << endl;
//         long long ans = (n & n - 1);
//         if (ans == 0 && (n & zobit) > 0)
//         {
//             return true;
//         }
//         return false;
//     }
// };