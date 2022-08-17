// class Solution
// {
// public:
//     int minEatingSpeed(vector<int> &piles, int h)
//     {
//         int los = 1;       // lowest speed possible
//         int his = INT_MIN; // highist speed possible
//         for (int &pile : piles)
//         {
//             his = max(his, pile);
//         }
//         while (los < his)
//         {
//             int speed = (los + his) / 2;
//             // check for speed
//             // Houres koko will take to complete all piles
//             int houres = 0;
//             for (int &pile : piles)
//             {
//                 // piles+speed-1 ->> it will give the ceil value
//                 int time = (pile + speed - 1) / speed;
//                 houres += time;
//             }

//             if (houres > h)
//             {
//                 los = speed + 1;
//             }
//             else
//             {
//                 // i got the ans
//                 his = speed;
//             }
//         }
//         return los;
//     }
// };