// class SnapshotArray
// {
// public:
//     vector<int> *v;
//     map<int, map<int, int>> mp;
//     int Snap = 0;
//     SnapshotArray(int length)
//     {
//         v = new vector<int>(length);
//     }
//     void set(int index, int val)
//     {
//         mp[Snap][index] = val;
//     }
//     int snap()
//     {
//         Snap++;
//         return Snap - 1;
//     }
//     int get(int index, int snap_id)
//     {
//         for (int i = snap_id; i >= 0; i--)
//         {
//             if (mp[i].count(index) > 0)
//             {
//                 return mp[i][index];
//             }
//         }
//         return 0;
//     }
// };