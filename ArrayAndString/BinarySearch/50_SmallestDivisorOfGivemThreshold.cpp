// class Solution {
// public:
//     int smallestDivisor(vector<int>& nums, int threshold) {

//         int lo = 1; // smallest divisor possible
//         int hi = INT_MIN; // largest divisor possible

//         for(int &num : nums){
//             hi=max(hi,num);
//         }

//         while(lo<hi){

//          int mid  = (lo+hi)/2;
//          int th = 0 ;
//          for(int & val : nums){
//              th += (val+mid-1)/mid;
//          }

//          if(th>threshold){
//              lo=mid+1;
//          }else{
//              hi=mid ;
//          }
//         }

//         return hi;

//     }
// };