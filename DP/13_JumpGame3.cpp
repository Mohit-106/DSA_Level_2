// class Solution
// {
// public:
//     bool canReachhelper(vector<int> &arr, int idx, vector<bool> &visited)
//     {

//         if (idx < 0 || idx >= arr.size())
//         {
//             return false;
//         }

//         if (visited[idx] == true)
//         {
//             return false;
//         }

//         if (arr[idx] == 0)
//         {
//             return true;
//         }

//         visited[idx] = true;
//         bool left = canReachhelper(arr, idx - arr[idx], visited);

//         if (left)
//         {
//             return true;
//         }

//         bool right = canReachhelper(arr, idx + arr[idx], visited);

//         if (right)
//         {
//             return true;
//         }

//         return false;
//     }

//     bool canReach(vector<int> &arr, int start)
//     {
//         vector<bool> visited(arr.size());
//         return canReachhelper(arr, start, visited);
//     }
// };