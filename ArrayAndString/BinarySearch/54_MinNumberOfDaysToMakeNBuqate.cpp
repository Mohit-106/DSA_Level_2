// class Solution
// {
// public:
//     int minDays(vector<int> &bloomDay, int m, int k)
//     {

//         long long check = (long long)m * (long long)k;
//         long long n = (long long)bloomDay.size();
//         if (check > n)
//         {
//             return -1;
//         }

//         // find max and min days
//         //  Min days = min of bloomDay
//         //  Max days = max of bloomDay

//         int hi = INT_MIN; // max days
//         int lo = INT_MAX; // min Days

//         for (int &val : bloomDay)
//         {
//             hi = max(hi, val);
//             lo = min(lo, val);
//         }
//         // cout<<lo<<" "<<hi<<endl;
//         while (lo < hi)
//         {

//             int mid = (lo + hi) / 2; // let mid is the min days
//             // cout<<mid<<endl;
//             int cadj = 0;
//             int adj = 0;
//             for (int &val : bloomDay)
//             {
//                 if (mid >= val)
//                 {
//                     cadj++;
//                 }
//                 else
//                 {
//                     if (cadj >= k)
//                     {
//                         adj += (cadj / k);
//                     }
//                     cadj = 0;
//                 }
//             }
//             if (cadj >= k)
//             {
//                 adj += (cadj / k);
//             }
//             // adj = max(adj,cadj);
//             // cout<<"adj-"<<" "<<adj<<endl;
//             if (adj >= m)
//             {
//                 hi = mid;
//             }
//             else
//             {
//                 lo = mid + 1;
//             }
//         }

//         return lo;
//     }
// };