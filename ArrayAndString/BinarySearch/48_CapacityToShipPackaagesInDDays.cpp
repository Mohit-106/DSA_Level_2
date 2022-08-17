// class Solution
// {
// public:
//     int shipWithinDays(vector<int> &weights, int days)
//     {

//         int lac = INT_MIN; // lowest allowed capacity of ship
//         int hac = 0;       // Highest allowed capacity of the ship
//         for (int &weight : weights)
//         {
//             lac = max(lac, weight);
//             hac += weight;
//         }

//         while (lac < hac)
//         {
//             int limit = (lac + hac) / 2; // checking for random value
//             int cdays = 1;               // days with limit capacity
//             int cweights = 0;

//             for (int &weight : weights)
//             {
//                 if (weight + cweights <= limit)
//                 {
//                     cweights += weight;
//                 }
//                 else
//                 {
//                     cdays++;
//                     cweights = weight;
//                 }
//             }

//             if (cdays > days)
//             {
//                 // it means we need more days to delever all packages with this capacity of ship
//                 // it means need to take some large value to reduce days
//                 lac = limit + 1;
//             }
//             else
//             {
//                 // in this case get valid answer
//                 // but try for some more leat allowed capacity
//                 hac = limit;
//             }
//         }
//         // retuen hi or lo
//         return hac;
//     }
// };