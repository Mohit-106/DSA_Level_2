// o(n^2)

// class Solution {
// public:
//     int minCut(string s) {
        
//         int n= s.size();
//         vector<vector<bool>>ip(n,vector<bool>(n,false));
//         for(int gap=0; gap<n; gap++){
//             int i= 0;
//             int j = gap;
//             while(j<n){
//                 if(gap==0){
//                     ip[i][j] = true;
//                 }else if(gap==1){
//                     if(s[i]==s[j]){
//                         ip[i][j] = true;
//                     }
//                 }else{
//                     if(s[i]==s[j] && ip[i+1][j-1]==true){
//                         ip[i][j]=true;
//                     }
//                 }
//                 i++;
//                 j++;
//             }
//         }

//         vector<int>dp(n);
//         dp[0] = 0;
//         for(int i=1; i<n; i++){
//             if(!ip[0][i]){

//                 int parts = INT_MAX;
//             for(int j=i; j>0; j--){
//                 if(ip[j][i]){
//                     parts = min(parts,dp[j-1]);
//                 }
//             }
//             dp[i] = parts+1;

//             }

//         }

//         return dp[n-1];






//     }
// };









//Gap strategy O(n^3)
// class Solution {
// public:
//     int minCut(string s) {
        
//         int n= s.size();
//         vector<vector<bool>>ip(n,vector<bool>(n,false));
//         for(int gap=0; gap<n; gap++){
//             int i= 0;
//             int j = gap;
//             while(j<n){
//                 if(gap==0){
//                     ip[i][j] = true;
//                 }else if(gap==1){
//                     if(s[i]==s[j]){
//                         ip[i][j] = true;
//                     }
//                 }else{
//                     if(s[i]==s[j] && ip[i+1][j-1]==true){
//                         ip[i][j]=true;
//                     }
//                 }
//                 i++;
//                 j++;
//             }
//         }

//         // for(vector<bool>v : ip){
//         //     for(int val : v){
//         //         cout<<val<<" ";
//         //     }
//         //     cout<<endl;
//         // }

//         // return -1;


//         vector<vector<int>>dp(n,vector<int>(n));

//          for(int gap=0; gap<n; gap++){
//             int i= 0;
//             int j = gap;
//             while(j<n){
//                 if(gap==1){
//                     if(s[i]!=s[j]){
//                         dp[i][j] = 1;
//                     }
//                 }else if(gap>1){
//                     if(ip[i][j]==true){
//                         dp[i][j] = 0;
//                     }else{
//                         int val = INT_MAX;
//                         for(int k = i; k<j; k++){
//                             int x = dp[i][k];
//                             int y = dp[k+1][j];
//                             val = min(val,(x+y));
//                         }
//                         dp[i][j] = val+1;
//                     }
//                 }
//                 i++;
//                 j++;
//             }
//         }
//         // for(vector<int>v : dp){
//         //     for(int val : v){
//         //         cout<<val<<" ";
//         //     }
//         //     cout<<endl;
//         // }

//         return dp[0][n-1];
//     }
// };


