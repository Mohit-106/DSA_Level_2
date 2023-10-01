// MaximumBeautyOfanArrayAfterApplyingOperations

//Prefix sum

// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {


//         int offset = 100000;
//         //prefix array
//         vector<int>parray(300009);
//         int n= nums.size();
//         for(int i=0; i<n; i++){

//             int sidx = nums[i] - k;
//             int eidx = nums[i] + k;
//             parray[sidx+offset]++;
//             parray[eidx+offset+1]--;

//         }

//         int res = 0;
//         for(int i=1; i<parray.size();i++){
//             parray[i] += parray[i-1];
//             res=max(parray[i],res); 
//         }

//         return res;

        
//     }
// };
