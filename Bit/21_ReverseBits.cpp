// class Solution
// {
// public:
//     uint32_t reverseBits(uint32_t n)
//     {
//         int j = 0;
//         int ans = 0;
//         for (int i = 31; i >= 0; i--)
//         {
//             int mask = 1 << i;
//             if ((n & mask) != 0)
//             {
//                 int tmask = 1 << j;
//                 ans |= tmask;
//             }
//             j++;
//         }
//         return ans;
//     }
// };