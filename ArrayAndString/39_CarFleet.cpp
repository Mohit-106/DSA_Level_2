// class Solution
// {
// public:
//     int carFleet(int target, vector<int> &position, vector<int> &speed)
//     {

//         priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
//         for (int i = 0; i < position.size(); i++)
//         {
//             pq.push({position[i], speed[i]});
//         }

//         int ans = 0;
//         double time = 0;
//         while (pq.size() > 0)
//         {

//             pair<int, int> top = pq.top();
//             pq.pop();
//             double dist = target - top.first;
//             double ctime = dist / top.second;
//             if (ctime > time)
//             {
//                 ans++;
//                 time = ctime;
//             }
//         }

//         return ans;
//     }
// };