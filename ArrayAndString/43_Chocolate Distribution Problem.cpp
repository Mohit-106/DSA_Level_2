// // https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
// //Sliding Window Approach
// class Solution{
//     public:
//     long long findMinDiff(vector<long long> a, long long n, long long m){
//     //code
    
//     sort(a.begin(),a.end());
//     int i =0;
//     int j = m-1;
//     int ans=INT_MAX;
//     while(j<n){
//         int diff = a[j]-a[i];
//         ans = min(ans,diff);
//         i++;
//         j++;
//     }
//     return ans;
//     }   
// };