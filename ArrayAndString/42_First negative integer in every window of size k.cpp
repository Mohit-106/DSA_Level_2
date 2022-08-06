// // https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k);

// // Driver program to test above functions
// int main() {
//     long long int t, i;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans) cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k) {

//          long long int i = k-1;
//          long long int j = 0;
//          vector<long long>res;
//          while(i<n){

//             while(j<=i){
//                 if(arr[j]<0 && j > i-k){
//                      res.push_back(arr[j]);
//                      break;
//                 }else if(j==i){
//                     res.push_back(0);
//                     break;
//                 }else{
//                     j++;
//                 }
//              }
//              i++;
//          }

//         return res;

//  }