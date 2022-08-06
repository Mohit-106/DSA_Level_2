// class Solution
// {
// public:
//     vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
//     {
//         vector<vector<int>> res;
//         int i = 0;
//         //adding intervals less than new interval
//         while (i < intervals.size() && intervals[i][1] < newInterval[0])
//         {
//             res.push_back(intervals[i]);
//             i++;
//         }
//          //this loop assures till when we will merge intervals with new interval
//         while (i < intervals.size() && intervals[i][0] <= newInterval[1])
//         {
//             newInterval[0] = min(newInterval[0], intervals[i][0]);
//             newInterval[1] = max(newInterval[1], intervals[i][1]);
//             i++;
//         }
//         res.push_back(newInterval);
//         // this loop will add all other left intervals
//         while (i < intervals.size())
//         {
//             res.push_back(intervals[i]);
//             i++;
//         }
//         return res;
//     }
// };