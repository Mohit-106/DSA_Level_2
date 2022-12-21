// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int pidx = 0;
//         int midx = 0;
//         int gidx = 0;  
//         for(int i =0 ;i<garbage.size(); i++){
//             string s = garbage[i];
//             for(int j = 0; j<s.size(); j++){
//                 if(s[j]=='M'){
//                     midx = i;
//                 }else if(s[j]=='P'){
//                     pidx = i;
//                 }else{
//                     gidx = i;
//                 }
//             }
//         }
//        // cout<<pidx<<midx<<gidx<<endl;
//        int time = 0;    
//         //paper truck
//         for(int i = 0; i<=pidx; i++){
//             string s = garbage[i];
//             if(i>0){
//                 time += travel[i-1];
//             }
//             for(int j=0; j<s.size();j++){
//                 if(s[j]=='P'){
//                     time++;
//                 }
//             }
//         }
//         for(int i = 0; i<=midx; i++){
//             string s = garbage[i];
//             if(i>0){
//                 time += travel[i-1];
//             }
//             for(int j=0; j<s.size();j++){
//                 if(s[j]=='M'){
//                     time++;
//                 }
//             }
//         }
//         for(int i = 0; i<=gidx; i++){
//             string s = garbage[i];
//             if(i>0){
//                 time += travel[i-1];
//             }
//             for(int j=0; j<s.size();j++){
//                 if(s[j]=='G'){
//                     time++;
//                 }
//             }
//         }
//        // cout<<time<<endl;
//         return time;      
//     }
// };