#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }


    unordered_map<int,vector<int>>mp;
    for(int i=0; i<v.size();i++){

        if(mp.find(v[i])!=mp.end()){
            mp[v[i]].push_back(i);
        }else{
            mp[v[i]]=vector<int>();
            mp[v[i]].push_back(i);
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