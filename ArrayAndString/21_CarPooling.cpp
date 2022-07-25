// class Solution
// {
// public:
//     bool carPooling(vector<vector<int>> &trips, int capacity)
//     {
//         map<int, int> mp;
//         for (vector<int> &trip : trips)
//         {
//             int pas = trip[0];
//             int pic = trip[1];
//             int drop = trip[2];
//             if (mp.find(pic) == mp.end())
//             {
//                 mp[pic] = pas;
//             }
//             else
//             {
//                 mp[pic] += pas;
//             }
//             if (mp.find(drop) == mp.end())
//             {
//                 mp[drop] = -pas;
//             }
//             else
//             {
//                 mp[drop] -= pas;
//             }
//         }
//         int count = 0;
//         for (auto &pr : mp)
//         {
//             cout << pr.first << " " << pr.second << endl;
//             count += pr.second;
//             if (count > capacity)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };