// class Solution{
//   public:
//     //Function to count subarrays with 1s and 0s.
//     long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
//     { 
//         unordered_map<int,int>mp;
//         int count=0;
//         int x=0;
//         mp[x]++;       
//         for(int i=0; i<n; i++){
//             if(arr[i]==1){
//                 x++;
//             }else{
//                 x--;
//             }   
//             if(mp.find(x)!=mp.end()){
//                 count+=mp[x];
//             }
//             mp[x]++;
//         }
//         return count; 
//     }
// };