#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> routes
    {
        {7, 12},
        {4, 5, 15},
        {6},
        {15,19}
    };

    unordered_map<int, vector<int>> mp;
    for (int bus=0; bus < routes.size(); bus++)
    {

        for (int route : routes[bus])
        {
            if (mp.find(route) != mp.end())
            {
              mp[route].push_back(bus);
            }else
            {
                mp[route] = vector<int>();
                mp[route].push_back(bus);
            }
        }
        
    }

    for (auto &pr : mp)
    {
        cout<<pr.first<<" -> ";
        for(int i=0;i<pr.second.size();i++){

            cout<<pr.second[i]<<" ";

        }
        cout << endl;
    }

    return 0;
}