// class Solution
// {
// public:
//     int maxDistToClosest(vector<int> &seats)
//     {

//         int prev = -1;
//         int res = 0;
//         for (int i = 0; i < seats.size(); i++)
//         {

//             if (seats[i] == 1)
//             {
//                 int ans = 0;
//                 if (prev < 0)
//                 {
//                     ans = i;
//                 }
//                 else
//                 {
//                     ans = (i - prev) / 2;
//                 }

//                 res = max(res, ans);
//                 prev = i;
//             }
//         }
//         int ans = seats.size() - 1 - prev;
//         res = max(res, ans);
//         return res;
//     }
// };