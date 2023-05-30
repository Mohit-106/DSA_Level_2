// class Solution
// {
// public:
//     int powerodtwo(int N)
//     {
//         if (N == 1)
//         {
//             return 0;
//         }
//         int x = 0;
//         while ((1 << x) <= N)
//         {
//             x++;
//         }
//         return x - 1;
//     }

//     int countBits(int N)
//     {
//         if (N == 0)
//         {
//             return 0;
//         }
//         // code here
//         int x = powerodtwo(N);
//         int setbotsbeforx = x * (1 << (x - 1));
//         int fromxton = (N - (1 << x) + 1);
//         int ans = setbotsbeforx + fromxton + countBits(N - (1 << x));
//         return ans;
//     }
// };