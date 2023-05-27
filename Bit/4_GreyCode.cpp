// class Solution
// {
// public:
//     vector<string> gchelper(int n)
//     {

//         if (n == 1)
//         {
//             vector<string> base{"0", "1"};
//             return base;
//         }

//         vector<string> ans = gchelper(n - 1);
//         vector<string> mans;
//         for (int i = 0; i < ans.size(); i++)
//         {
//             mans.push_back("0" + ans[i]);
//         }

//         for (int i = ans.size() - 1; i >= 0; i--)
//         {
//             mans.push_back("1" + ans[i]);
//         }

//         return mans;
//     }

//     int convertToNum(string s)
//     {
//         int num = 0;
//         int t = 1;
//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             int j = s[i] - '0';
//             num += (t * j);
//             t *= 2;
//         }
//         return num;
//     }

//     vector<int> grayCode(int n)
//     {

//         vector<string> bits = gchelper(n);
//         for (string val : bits)
//         {
//             cout << val << " ";
//         }
//         vector<int> ans;
//         for (string s : bits)
//         {
//             int num = convertToNum(s);
//             ans.push_back(num);
//         }

//         return ans;
//     }
// };