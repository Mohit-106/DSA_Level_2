// class Solution
// {
// public:
//     string getmap(string &s)
//     {

//         map<char, int> ans;
//         for (char ch : s)
//         {
//             ans[ch]++;
//         }
//         string str = "";
//         for (auto val : ans)
//         {
//             str += val.first;
//             str += to_string(val.second);
//         }

//         return str;
//     }

//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {
//         vector<vector<string>> ans;
//         unordered_map<string, vector<string>> mp;

//         for (string s : strs)
//         {
//             string ts = getmap(s);
//             mp[ts].push_back(s);
//         }
//         for (auto val : mp)
//         {
//             vector<string> vs = val.second;
//             ans.push_back(vs);
//         }
//         return ans;
//     }
// };