// // https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/

// class Solution
// {
// public:
//     typedef pair<int, pair<int, int>> ppi;
//     vector<int> smallestRange(vector<vector<int>> &nums)
//     {

//         priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
//         int lr = 0;
//         int ur = 0;
//         int Max = INT_MIN;
//         int rsize = INT_MAX;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             pq.push(make_pair(nums[i][0], make_pair(0, i)));
//             Max = max(Max, nums[i][0]);
//         }
//         // cout<<Max<<endl;

//         while (pq.size() == nums.size())
//         {
//             ppi top = pq.top();
//             pq.pop();
//             int csize = Max - top.first;
//             // cout<<csize<<endl;
//             if (csize < rsize)
//             {
//                 rsize = csize;
//                 cout << rsize << endl;
//                 lr = top.first;
//                 ur = Max;
//             }

//             if (top.second.first < nums[top.second.second].size() - 1)
//             {
//                 top.second.first++;
//                 top.first = nums[top.second.second][top.second.first];
//                 pq.push(top);
//                 Max = max(Max, top.first);
//             }
//         }
//         // cout<<rsize<<endl;

//         vector<int> ans = {lr, ur};
//         return ans;
//     }
// };