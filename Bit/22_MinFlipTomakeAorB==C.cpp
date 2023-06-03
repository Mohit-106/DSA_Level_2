// class Solution
// {
// public:
//     int minFlips(int a, int b, int c)
//     {

//         int count = 0;
//         for (int i = 0; i < 32; i++)
//         {
//             int cbit = (1 << i) & c;
//             int abit = (1 << i) & a;
//             int bbit = (1 << i) & b;
//             if (cbit == 0)
//             {
//                 if (abit != 0 && bbit != 0)
//                 {
//                     count += 2;
//                 }
//                 else if ((abit == 0 && bbit != 0) || (bbit == 0 && abit != 0))
//                 {
//                     count++;
//                 }
//             }
//             else
//             {
//                 if (abit == 0 && bbit == 0)
//                 {
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };