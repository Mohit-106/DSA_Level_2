// class Solution
// {
// public:
//     bool canArrange(vector<int> &v, int k)
//     {
//         unordered_map<int, int> mp;
//         for (int val : v)
//         {
//             int rem = val % k;
//             if (rem >= 0)
//             {
//                 mp[rem]++;
//             }
//             else
//             {
//                 mp[k + rem]++;
//             }
//         }
//         for (auto val : mp)
//         {
//             int rem = val.first;
//             if (rem == 0)
//             {
//                 if (mp[rem] % 2 == 1)
//                     return false;
//             }
//             else if (2 * rem == k)
//             {
//                 if (mp[rem] % 2 == 1)
//                     return false;
//             }
//             else
//             {
//                 // if(mp[rem] != mp[k-rem]){
//                 //   return false;
//                 // }
//                 if (mp.find(k - rem) != mp.end())
//                 {
//                     if (mp[rem] != mp[k - rem])
//                         return false;
//                 }
//                 else if (mp.find(k - rem) == mp.end())
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };