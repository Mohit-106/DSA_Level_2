// class Solution {
// public:
//     int secondsToRemoveOccurrences(string s) {
//         int time  = 0;
//         string str = s;
//         while(true){
//             int cnt = 0;
//             int i = 0;
//              while(i<s.size()){
//                  if(s[i] =='0' && s[i+1]=='1'){
//                      swap(s[i],s[i+1]);
//                      cnt++;
//                      i+=2;
//                  }else{
//                      i++;
//                  }
//              }
//             if(cnt==0){
//                 break;
//             }
//             time++;
//         }
        
//         return time;
//     }
// };