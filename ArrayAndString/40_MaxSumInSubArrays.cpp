// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// // } Driver Code Ends

// class Solution
// {
// public:
//     long long pairWithMaxSum(long long arr[], long long N)
//     {
//         long long ans = INT_MIN;
//         for (long long i = 0; i < N - 1; i++)
//         {
//             if (ans < arr[i] + arr[i + 1])
//             {
//                 ans = arr[i] + arr[i + 1];
//             }
//         }

//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];
//         for (ll i = 0; i < n; i++)
//             cin >> a[i];
//         Solution ob;
//         cout << ob.pairWithMaxSum(a, n) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends