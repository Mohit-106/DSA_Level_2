// //Greedy approach
// class Solution {
// public:
//     int maxProfit(vector<int>& prices, int fee) {

//         int obuyp = -prices[0];
//         int osellp = 0;
//         for(int i=1;i<prices.size();i++){

//             int nbuyp = osellp - prices[i];
//             int nsellp = prices[i]+obuyp-fee;

//             obuyp = max (nbuyp,obuyp);
//             osellp = max (nsellp,osellp);

//         }

//         return osellp;

//     }
// };