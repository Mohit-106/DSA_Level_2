// bool findPair(int arr[], int size, int n)
// {
//     int i = 0;
//     int j = 1;
//     sort(arr, arr + size);
//     while (j < size)
//     {
//         if (arr[j] - arr[i] < n)
//         {
//             j++;
//         }
//         else if (arr[j] - arr[i] > n)
//         {
//             i++;
//         }
//         else
//         {
//             return true;
//         }
//         if (i == j)
//         {
//             j++;
//         }
//     }
//     return false;
// }