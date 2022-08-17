// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int m;
//     int n;
//     cin>>m>>n;
//     vector<vector<int>>grid(m,vector<int>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>grid[i][j];
//         }
//     }

//     //get x and y coordinates
//     vector<int>x;
//     for(int i =0;i<m;i++){
//         for(int j = 0;j<n;j++){
//           if(grid[i][j]==1){
//               x.push_back(i);
//           }
//         }
//     }
//     vector<int>y;
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<m;j++){
//           if(grid[j][i]==1){
//               y.push_back(i);
//           }
//         }
//     }
//     int mox = x[x.size()/2];
//     int moy = y[y.size()/2];
//     vector<int>mc = {mox,moy};   // meeting co-ordinate
//     int distance = 0;
//     for(int i =0; i<x.size();i++){
//         distance+=abs(x[i]-mc[0]);
//         distance+=abs(y[i]-mc[1]);
//     }
//     cout<<distance<<endl;

// }