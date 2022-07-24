// class Solution
// {
// public:
//        int findPlatform(int arr[], int dep[], int n)
//     {
//         sort(arr, arr + n);
//         sort(dep, dep + n);

//         int i = 0;
//         int j = 0;
//         int res = 0;
//         int count = 0;
//         while (i < n && j < n)
//         {

//             if (arr[i] <= dep[j])
//             {
//                 count++;
//                 i++;
//             }
//             else
//             {
//                 count--;
//                 j++;
//             }

//             res = max(res, count);
//         }

//         return res;
//     }
// };
