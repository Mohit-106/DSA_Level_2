// class Solution {
// public:
//     int minimumSize(vector<int>& nums, int maxOperations) {
        
//         int lbsa = 1; //Lowest bag size allowed
//         int hbsa = INT_MIN; //Highest bag size allowed
//         for(int &num : nums){
//             hbsa = max(hbsa,num);
//         }
//         while(lbsa < hbsa){
            
//            int sob  = (lbsa+hbsa)/2;
//            int ops  = 0;
//            for(int val : nums){
//                if(val > sob){
//                    int spare = val - sob;
//                    ops += ((spare+sob-1)/sob);
//                }
               
//            }
//            if(ops>maxOperations){
//                lbsa=sob+1;
//            }else{
//                hbsa=sob;
//            }  
            
//         }
        
//         return lbsa;
//     }
// };