// class Solution
// {
// public:
//     int gcd(int a, int b)
//     {
//         if (a == 0)
//         {
//             return b;
//         }
//         if (b == 0)
//         {
//             return a;
//         }
//         return gcd(b, a % b);
//     }

//     bool hasGroupsSizeX(vector<int> &deck)
//     {

//         // At first identify the smallest group size.
//         // Smallest size will not be the the smallest frequency but gcd.
//         // Each group should be divisible by some number that is gcd of all the groups.

//         unordered_map<int, int> mp;
//         for (int val : deck)
//         {
//             mp[val]++;
//         }

//         int GCD = 0;
//         for (auto val : mp)
//         {
//             GCD = gcd(GCD, val.second);
//         }

//         if (GCD > 1)
//         {
//             return true;
//         }

//         return false;
//     }
// };