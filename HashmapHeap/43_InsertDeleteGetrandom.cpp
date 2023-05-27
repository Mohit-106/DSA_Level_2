// class RandomizedSet
// {
// public:
//     unordered_map<int, int> mp;
//     vector<int> v;
//     RandomizedSet()
//     {
//     }
//     bool insert(int val)
//     {
//         if (mp.count(val))
//             return false;
//         int n = v.size();
//         v.push_back(val);
//         mp[val] = n;
//         return true;
//     }
//     bool remove(int val)
//     {
//         if (mp.count(val))
//         {
//             // get index
//             int idx = mp[val];
//             // get last index
//             int last_idx = v.size() - 1;
//             // swap
//             int temp = v[idx];
//             v[idx] = v[last_idx];
//             v[last_idx] = temp;
//             mp[v[idx]] = idx;
//             v.pop_back();
//             mp.erase(val);
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