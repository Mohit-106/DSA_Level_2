// class Solution
// {
// public:
//     // Function to get the maximum total value in the knapsack.
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         double ans = 0.0;
//         vector<pair<double, int>> ratio(n);
//         for (int i = 0; i < n; i++)
//         {
//             double num = arr[i].value;
//             double den = arr[i].weight;
//             double r = num / den;
//             pair<double, int> pr = make_pair(r, i);
//             ratio[i] = pr;
//         }

//         sort(ratio.begin(), ratio.end());

//         for (int i = n - 1; i >= 0; i--)
//         {

//             if (W == 0)
//             {
//                 break;
//             }
//             else
//             {
//                 // cout<<ratio[i].second<<endl;
//                 int idx = ratio[i].second;
//                 double wt = arr[idx].weight;
//                 double val = arr[idx].value;

//                 if (W >= wt)
//                 {
//                     ans += val;
//                     W -= wt;
//                 }
//                 else
//                 {
//                     double fval = (val / wt) * W;
//                     ans += fval;
//                     break;
//                 }
//             }
//         }

//         return ans;
//     }
// };