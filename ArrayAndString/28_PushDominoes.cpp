// class Solution
// {
// public:
//     string pushDominoes(string dominoes)
//     {
//         dominoes = 'L' + dominoes + 'R';
//         int prev = 0;
//         for (int curr = 1; curr <= dominoes.size(); curr++)
//         {
//             if (dominoes[curr] == 'L')
//             {
//                 if (dominoes[prev] == 'L')
//                 {
//                     for (int i = prev + 1; i < curr; i++)
//                     {
//                         dominoes[i] = 'L';
//                     }
//                 }
//                 else if (dominoes[prev] == 'R')
//                 {
//                     int low = prev + 1;
//                     int high = curr - 1;
//                     while (low < high)
//                     {
//                         dominoes[low] = 'R';
//                         dominoes[high] = 'L';
//                         low++;
//                         high--;
//                     }
//                 }
//                 prev = curr;
//             }
//             else if (dominoes[curr] == 'R')
//             {
//                 if (dominoes[prev] == 'L')
//                 {
//                     // nothing to do
//                 }
//                 else if (dominoes[prev] == 'R')
//                 {
//                     for (int i = prev + 1; i < curr; i++)
//                     {
//                         dominoes[i] = 'R';
//                     }
//                 }
//                 prev = curr;
//             }
//         }
//         // cout<<dominoes<<endl;
//         string ans;
//         for (int i = 1; i < dominoes.size() - 1; i++)
//         {
//             ans += dominoes[i];
//         }
//         return ans;
//     }
// };