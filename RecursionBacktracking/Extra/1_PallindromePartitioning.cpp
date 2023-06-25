// class Solution
// {
// public:
//     vector<vector<string>> res;
//     bool ispallindrome(string &s)
//     {
//         int i = 0;
//         int j = s.size() - 1;
//         while (i < j)
//         {
//             if (s[i] != s[j])
//                 return false;

//             i++;
//             j--;
//         }
//         return true;
//     }
//     void solver(string s, vector<string> &str)
//     {

//         if (s.size() == 0)
//         {
//             res.push_back(str);
//             return;
//         }

//         if (s.size() == 1)
//         {
//             str.push_back(s);
//             res.push_back(str);
//             str.pop_back();
//             return;
//         }

//         for (int i = 1; i <= s.size(); i++)
//         {

//             string x = s.substr(0, i);
//             if (ispallindrome(x))
//             {
//                 string y = s.substr(i);
//                 str.push_back(x);
//                 solver(y, str);
//                 str.pop_back();
//             }
//         }
//     }

//     vector<vector<string>> partition(string s)
//     {
//         vector<string> str;
//         solver(s, str);
//         return res;
//     }
// };