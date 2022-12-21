// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     vector<int>dp(n+1);
//     dp[0] = 1;
//     dp[1] = 1;

//     for(int i =2 ;i<=n; i++){
//         for(int inside = 0; inside<i; inside++){
//             int outside = i-inside-1; //total - inside - fixed
//             dp[i]+= dp[inside]*dp[outside];
//         }
//     }

//     cout<<dp[n];

    

//     return 0;
// }