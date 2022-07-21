// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int obp = -prices[0];
//         int osp = 0;
//         int ocp = 0;
//         for(int i=0;i<prices.size();i++){
//             int nbp = ocp - prices[i];
//             int nsp = obp + prices[i];
//             int ncp = osp;
            
//             obp = max(nbp,obp);
//             osp = max(nsp,osp);
//             ocp = max(ncp,ocp);
//         }
        
//         return osp;
        
//     }
// };