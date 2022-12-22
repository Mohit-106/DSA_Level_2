// class Solution
// {
// public:
//     vector<int> findAnagrams(string s, string p)
//     {
//         vector<int> ans;
//         unordered_map<char, int> mp1;
//         unordered_map<char, int> mp2;

//         for (char ch : p)
//         {
//             mp2[ch]++;
//         }
//         int ss = s.size();
//         int ps = p.size();
//         int count = ps;
//         int i = -1;
//         int j = -1;
//         while (true)
//         {
//             bool f1 = false;
//             bool f2 = false;
//             // aquire
//             while (i < ss - 1)
//             {
//                 f1 = true;
//                 i++;
//                 char ch = s[i];
//                 mp1[s[i]]++;
//                 if (mp2[s[i]] >= mp1[s[i]])
//                 {
//                     count--;
//                 }
//                 // when window size becomes equal to string
//                 if (i - j == ps)
//                 {
//                     if (count == 0)
//                     {
//                         ans.push_back(j + 1);
//                         break;
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }
//             }

//             while (j < i)
//             {
//                 f2 = true;
//                 j++;
//                 if (mp1[s[j]] == 1)
//                 {
//                     mp1.erase(s[j]);
//                 }
//                 else
//                 {
//                     mp1[s[j]]--;
//                 }

//                 if (mp1[s[j]] < mp2[s[j]])
//                 {
//                     count++;
//                     break;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             if (f1 == false && f2 == false)
//             {
//                 break;
//             }
//         }

//         return ans;
//     }
// };