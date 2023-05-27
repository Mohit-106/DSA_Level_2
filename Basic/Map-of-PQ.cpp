#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, priority_queue<string, vector<string>, greater<string>>> mp;

    // mp["abc"] = priority_queue<string, vector<string>>();
    mp["abc"].push("aba");
    mp["abc"].push("aaa");
    mp["abc"].push("z");
    mp["abc"].push("abc");
    for (auto &val : mp)
    {
        priority_queue<string, vector<string>, greater<string>> ans = val.second;
        while (ans.size() > 0)
        {
            string s = ans.top();
            ans.pop();
            cout << s << endl;
        }
    }

    return 0;
}