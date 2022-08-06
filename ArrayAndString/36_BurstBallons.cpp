// class Solution
// {
// public:
//     int findMinArrowShots(vector<vector<int>> &points)
//     {

//         sort(points.begin(), points.end());
//         int arrows = 1;
//         int end = INT_MAX;
//         for (auto &point : points)
//         {
//             if (point[0] <= end)
//             {
//                 end = min(end, point[1]);
//             }
//             else
//             {
//                 arrows++;
//                 end = point[1];
//             }
//         }

//         return arrows;
//     }
// };