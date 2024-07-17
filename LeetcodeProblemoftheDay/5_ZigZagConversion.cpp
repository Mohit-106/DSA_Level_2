// class Solution
// {
// public:
//     string convert(string s, int numRows)
//     {

//         if (numRows < 2)
//             return s;

//         vector<string> strings(numRows);
//         int i = 0;
//         int j = 0;
//         while (i < s.size())
//         {
//             while (i < s.size() && j < numRows)
//             {
//                 strings[j] += s[i];
//                 j++;
//                 i++;
//             }
//             j = numRows - 2;
//             while (i < s.size() && j >= 0)
//             {
//                 strings[j] += s[i];
//                 j--;
//                 i++;
//             }
//             j = 1;
//         }

//         string ans;

//         for (int i = 0; i < numRows; i++)
//         {
//             ans += strings[i];
//         }
//         return ans;
//     }
// };