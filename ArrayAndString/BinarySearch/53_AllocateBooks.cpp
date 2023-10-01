// class Solution 
// {
//     public:
//     //Function to find minimum number of pages.
//     int findPages(int nums[], int n, int s) 
//     {
//         if(n<s){
//             return -1;
//         }
//         int lo = INT_MIN; // in case of n books and n students
//         int hi = 0; // in case of n books and 1 student
        
//         for(int i=0; i<n;i++){
//             lo=max(lo,nums[i]);
//             hi+=nums[i];
//         }
        
//         while(lo<hi){
//             //let these are the min pages for a student
//             int mid = (lo+hi)/2;
            
//             int cpages = 0;
//             int students = 1;
//             for(int i=0; i<n; i++){
//                 if(cpages + nums[i] <= mid){
//                     cpages+=nums[i];
//                 }else{
//                     students++;
//                     cpages=nums[i];
//                 }
//             }
            
//             if(students<=s){
//                 hi = mid;
//             }else{
//                 lo = mid+1;
//             }
            
            
//         }
//         return lo;
        
        
        
//     }
// };
