// class Solution
// {
// public:
//     string fractionToDecimal(int numerator, int denominator)
//     {
//         if (numerator == 0)
//             return "0";
//         string ans = "";
//         int i = 0;
//         int n = abs(numerator);
//         int d = abs(denominator);
//         long long rem = n % d;
//         long long quo = n / d;
//         if (rem == 0)
//         {
//             ans.append(to_string(quo));
//         }
//         else
//         {
//             ans.append(to_string(quo) + ".");
//             unordered_map<long long, long long> mp;
//             while (rem != 0)
//             {
//                 if (mp.find(rem) == mp.end())
//                 {
//                     mp[rem] = ans.size();
//                     rem *= 10;
//                     quo = rem / d;
//                     rem %= d;
//                     ans.append(to_string(quo));
//                 }
//                 else
//                 {
//                     long long si = mp[rem];
//                     string str1 = ans.substr(0, si);
//                     string str2 = ans.substr(si);
//                     ans = str1 + "(" + str2 + ")";
//                     break;
//                 }
//             }
//         }
//         if (numerator < 0 && denominator < 0)
//         {
//             return ans;
//         }
//         else if (numerator < 0 || denominator < 0)
//         {
//             ans = "-" + ans;
//             return ans;
//         }
//         else
//         {
//             return ans;
//         }
//     }
// };