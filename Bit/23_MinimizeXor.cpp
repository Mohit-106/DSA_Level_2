//Step 1- Count the set bit
//Step 2- To minimize the xor we need to make most set bit of num1 as zero
//        to do so start loop from left to right and make lmsb as as in ans mask
// Step3- if count still not zero then now we shold set bit on from least significant bit so
          //that when we xor 1 with 0 then we get least significant bit as on.

//class Solution
// {
// public:
//     int minimizeXor(int num1, int num2)
//     {

//         int count = 0;
//         int tnum2 = num2;

//         while (tnum2 != 0)
//         {
//             int rmsb = ~(tnum2 & -tnum2);
//             tnum2 &= rmsb;
//             count++;
//         }

//         int ansMask = 0;

//         for (int i = 31; i >= 0 && count != 0; i--)
//         {
//             int mask = 1 << i;
//             if ((mask & num1) != 0)
//             {
//                 ansMask |= mask;
//                 count--;
//             }
//         }

//         for (int i = 0; i < 32 && count != 0; i++)
//         {
//             int tmask = 1 << i;
//             if ((tmask & num1) == 0)
//             {
//                 ansMask |= tmask;
//                 count--;
//             }
//         }

//         return ansMask;
//     }
// };