// class Solution {
// public:
//     int exp(int n){
//         return n*(n+1)/2;
//     }
    
//     bool check(int n , int m){
//         if(n%2 == m%2){
//             return true;
//         }
//         return false;
//     }
    
//     int reachNumber(int target) {
//         target = abs(target);
//         if(target == 1){
//             return 1;
//         }
        
//         int i = 1;
//         while(true){
//           int range = exp(i); 
//           if( range >=  target && check(target,range)){
//              break;
//           }
//           i++;
//         }
             
             
//        return i;
        
//     }
// };