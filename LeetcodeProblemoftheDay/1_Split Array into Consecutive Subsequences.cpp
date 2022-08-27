// class Solution {
// public:
//     bool isPossible(vector<int>& nums) {
//         //availability map of nums
//         map<int,int>av;  // avalability map
//         //Those element who can be part of any of the existing group in future
//         map<int,int>wl; // Waiting list map 
//         for(int i =0; i<nums.size();i++) av[nums[i]]++;
//         for(int val : nums){
//             //if num has 0 freq then continue
//             if(av[val]==0){
//                 continue;
//             }
//             //if any other existing group looking for val then val will join that group
//             if(wl[val]>0){
//                 av[val]--;
//                 wl[val]--;
//                 wl[val+1]++;
//             }
//             //if no one is looking for val then val will caheck can it start a new group 
//             else if(av[val]>0 && av[val+1]>0 && av[val+2]>0){
//                 av[val]--;
//                 av[val+1]--;
//                 av[val+2]--;
//                 wl[val+3]++;
//             }else{
//                 return false;
//             }  
//         }
//         return true;
//     }
// };