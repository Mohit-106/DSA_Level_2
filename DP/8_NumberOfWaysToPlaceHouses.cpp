// class Solution {
// public:
//     int countHousePlacements(int n) {
//         int m = 1000000007;
//         int ewh = 1; //ending with house
//         int ews = 1; //ending with space/blank
//         for(int i = 2; i<=n; i++){
//             int newh = ews%m;
//             int news = ews%m + ewh%m;
//             ewh = newh;
//             ews = news;
//         }
        
//         long long ans =ewh%m + ews%m;
//         return (ans*ans)%m;
        
//     }
// };