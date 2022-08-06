// class Solution{
// public:
//     int minSquares(long long L, long long B){

//         if(L==B){
//             return 1;
//         }
//         if(L==1){
//             return B;
//         }
//         if(B==1){
//             return L;
//         }

//         long long minVal = min(B,L);
//         long long ans = 0;
//         if(minVal == B){
//             ans = minSquares(L-B,B);
//         }else{
//             ans = minSquares(L,B-L);
//         }
//         return ans + 1;

//     }
// };