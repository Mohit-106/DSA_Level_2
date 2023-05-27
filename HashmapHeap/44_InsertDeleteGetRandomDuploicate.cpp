// class RandomizedCollection
// {
// public:
//     unordered_map<int, set<int>> mp;
//     vector<int> v;

//     RandomizedCollection()
//     {
//     }

//     bool insert(int val)
//     {

//         v.push_back(val);
//         int idx = v.size() - 1;
//         mp[val].insert(idx);
//         return mp[val].size() == 1;
//     }

//     bool remove(int val)
//     {

//         auto itr = mp.find(val);

//         if (itr != mp.end())
//         {
//             int idx = *itr->second.begin();
//             itr->second.erase(itr->second.begin());

//             v[idx] = v.back();
//             mp[v.back()].insert(idx);
//             mp[v.back()].erase(v.size() - 1);
//             v.pop_back();

//             if (itr->second.size() == 0)
//                 mp.erase(itr);

//             return true;
//         }
//         return false;
//     }

//     int getRandom()
//     {
//         int idx = rand() % v.size();
//         return v[idx];
//     }
// };