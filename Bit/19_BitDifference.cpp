// class Solution{
// public:
//     int countBits(int N, long long int A[])
//     {
//         int ans = 0;
//         int mod = 1000000007;
//         int size = 32;

//         for (int i = 0; i < size; i++) {
//             long long z = 0;
//             long long o = 0;

//             for (int j = 0; j < N; j++) {
//                 int num = A[j];
//                 long long mask = 1LL << i;
//                 if ((num & mask) == 0) {
//                     z++;
//                 } else {
//                     o++;
//                 }
//             }

//             ans = (ans + ((z * o) % mod) * 2) % mod;
//         }

//         return ans;
        
//     }
// };