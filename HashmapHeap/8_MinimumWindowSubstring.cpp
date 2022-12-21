// class Solution
// {
// public:
//     string minWindow(string s, string t)
//     {
//         string ans = "";
//         unordered_map<char, int> smap;
//         unordered_map<char, int> tmap;
//         for (char ch : t)
//         {
//             tmap[ch]++;
//         }
//         int i = 0;
//         int j = 0;
//         int count = 0;
//         while (true)
//         {
//             bool f1 = false;
//             bool f2 = false;
//             while (i < s.size() && count < t.size())
//             {
//                 // aquire 
                // till all elements of t is in window
//                 smap[s[i]]++;
//                 if (smap[s[i]] <= tmap[s[i]])
//                 {
//                     count++;
//                 }
//                 f1 = true;
//                 i++;
//             }
//             // release
               //now when we have all elements in the window now we can collect ans 
               //ans release them one by one ans check if ans can still exist or not 
               //if exist then collect it otherwise don't.
//             while (j < i && count == t.size())
//             {
//                 string pans = s.substr(j, i - j);
//                 if (ans.size() == 0 || pans.size() < ans.size())
//                 {
//                     ans = pans;
//                     cout << ans << endl;
//                 }
//                 if (smap[s[j]] == 1)
//                 {
//                     smap.erase(s[j]);
//                 }
//                 else
//                 {
//                     smap[s[j]]--;
//                 }

//                 if (smap[s[j]] < tmap[s[j]])
//                 {
//                     count--;
//                 }
//                 j++;
//                 f2 = true;
//             }
//             if (f1 == false && f2 == false)
//             {
//                 break;
//             }
//         }

//         return ans;
//     }
// };
