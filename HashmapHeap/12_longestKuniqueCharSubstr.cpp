// class Solution
// {
// public:
//     int longestKSubstr(string s, int k)
//     {
//         // your code here
//         int n = s.size();
//         int ans = -1;
//         unordered_map<char, int> mp;
//         int i = -1;
//         int j = -1;

//         while (true)
//         {

//             bool l1 = false;
//             bool l2 = false;

//             // acquire
//             while (i < n - 1)
//             {

//                 l1 = true;
//                 i++;

//                 mp[s[i]]++;
//                 if (mp.size() == k)
//                 {
//                     ans = max(ans, i - j);
//                 }
//                 else if (mp.size() > k)
//                 {
//                     break;
//                 }
//             }

//             // release
//             while (j < i)
//             {

//                 l2 = true;
//                 j++;

//                 if (mp[s[j]] == 1)
//                 {
//                     mp.erase(s[j]);
//                 }
//                 else
//                 {
//                     mp[s[j]]--;
//                 }

//                 if (mp.size() == k)
//                 {
//                     ans = max(ans, i - j);
//                     break;
//                 }
//             }

//             if (l1 == false && l2 == false)
//             {
//                 break;
//             }
//         }
//         return ans;
//     }