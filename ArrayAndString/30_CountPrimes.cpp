// class Solution
// {
// public:
//     int countPrimes(int n)
//     {

//         if (n < 2)
//         {
//             return 0;
//         }

//         vector<bool> primes(n + 1, true);
//         primes[0] = false;
//         primes[1] = false;

//         for (int i = 2; i * i < n; i++)
//         {
//             if (primes[i] == false)
//             {
//                 continue;
//             }
//             for (int m = i; m * i < n; m++)
//             {
//                 primes[m * i] = false;
//             }
//         }

//         int count = 0;

//         for (int i = 2; i < primes.size() - 1; i++)
//         {
//             if (primes[i] == true)
//             {
//                 count++;
//             }
//         }

//         return count;
//     }
// };