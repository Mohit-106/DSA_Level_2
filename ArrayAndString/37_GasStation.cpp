// class Solution
// {
// public:
//     int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
//     {
//         int cs = 0;
//         int os = 0;
//         int idx = 0;
//         for (int i = 0; i < cost.size(); i++)
//         {
//             os += (gas[i] - cost[i]);
//             cs += (gas[i] - cost[i]);
//             if (cs < 0)
//             {
//                 idx = i + 1;
//                 cs = 0;
//             }
//         }
//         if (os < 0)
//         {
//             return -1;
//         }
//         return idx;
//     }
// };