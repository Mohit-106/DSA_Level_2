// class Solution
// {
// public:
//     vector<int> powerfulIntegers(int x, int y, int bound)
//     {
//         vector<int> ans;
//         set<int> s;
//         for (int i = 1; i < bound; i *= x)
//         {
//             for (int j = 1; j < bound; j *= y)
//             {
//                 if (i + j <= bound)
//                 {
//                     s.insert(i + j);
//                 }
//                 if (y == 1)
//                 {
//                     break;
//                 }
//             }
//             if (x == 1)
//             {
//                 break;
//             }
//         }
//         for (int val : s)
//         {
//             ans.push_back(val);
//         }
//         return ans;
//     }
// };