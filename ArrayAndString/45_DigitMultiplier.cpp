// //{ Driver Code Starts

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends

// class Solution
// {
// public:
//     string getSmallest(long long N)
//     {
//         string str;
//         if (N <= 9)
//         {
//             string ans = to_string(N);
//             return ans;
//         }
//         for (int i = 9; i >= 2; i--)
//         {
//             while (N % i == 0)
//             {
//                 N = N / i;
//                 str += to_string(i);
//             }
//         }
//         if (N > 10)
//         {
//             return "-1";
//         }
//         string rev = string(str.rbegin(), str.rend());
//         return rev;
//     }
// };
// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long N;
//         cin >> N;
//         Solution ob;
//         cout << ob.getSmallest(N) << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends