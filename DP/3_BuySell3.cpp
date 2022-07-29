// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {

//         vector<int> mist(prices.size());
//         int minm = prices[0];
//         int profit = 0;
//         for (int i = 1; i < mist.size(); i++)
//         {
//             if (minm < prices[i])
//             {
//                 int val = prices[i] - minm;
//                 mist[i] = max(profit, prices[i] - minm);
//                 profit = mist[i];
//             }
//             else
//             {
//                 mist[i] = profit;
//             }

//             minm = min(minm, prices[i]);
//         }

//         profit = 0;
//         vector<int> mibt(prices.size());
//         int maxm = prices[prices.size() - 1];
//         for (int i = prices.size() - 2; i >= 0; i--)
//         {

//             if (prices[i] < maxm)
//             {
//                 int val = maxm - prices[i];
//                 mibt[i] = max(profit, val);
//                 profit = mibt[i];
//             }
//             else
//             {
//                 mibt[i] = profit;
//             }

//             maxm = max(maxm, prices[i]);
//         }

//         int res = 0;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             // cout<<mist[i]<<"->"<<mibt[i]<<endl;
//             res = max(res, mist[i] + mibt[i]);
//         }

//         return res;
//     }
// };