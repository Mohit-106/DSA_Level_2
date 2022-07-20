// class Solution {
// public:
//     int maxChunksToSorted(vector<int>& arr) {
        
//         int me = INT_MIN;
//         int chunks = 0;
        
//         for(int i=0;i<arr.size();i++){
//             me = max(me,arr[i]);
//             if(me==i){
//                 chunks++;
//             }
//         }
        
//         return chunks;
        
        
//     }
// };