// Leetcode 2772

// class Solution {
// public:
//     bool checkArray(vector<int>& nums, int k) {

//         int n = nums.size();
//         vector<long>parr(n+1,0);
//         //this means we need nums[0] number of operations to make this array element zero
//         parr[0]+=nums[0];
//         parr[k]-=nums[0];

//         for(int i=1; i<n; i++){

//             parr[i]+=parr[i-1];

//             //This means we have done just enough operatins to make it zero
//             if(parr[i] == nums[i]){
//                 continue;
//             }

//             // In case operations are more then we can say numbert has became negative
//             if(parr[i] > nums[i]){
//                 return false;
//             }

//             // if we need to perform more operations but window left is less then k
//             if(i+k-1 >= n){
//                 return false;
//             }

//             //perform operations
//             long ops = (long)nums[i] - parr[i];
//             parr[i]+=ops;
//             parr[i+k]-=ops;
//         }

//         return true;

//     }
// };