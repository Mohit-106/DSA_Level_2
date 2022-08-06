//o(1)space 
// class Solution
// {
// public:
//     vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
//     {
//         int i = 0;
//         int j = 0;
//         vector<vector<int>> ans;
//         while (i < firstList.size() && j < secondList.size())
//         {
//             int lo = max(firstList[i][0], secondList[j][0]);
//             int hi = min(firstList[i][1], secondList[j][1]);
//             if (lo <= hi)
//             {
//                 ans.push_back({lo, hi});
//             }
//             if (firstList[i][1] < secondList[j][1])
//             {
//                 i++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         return ans;
//     }
// };

//o(firstLenght+secondLengh) approach
//sort and merge on the basis of first index
//now use stack push 0th element ans check with 1 if any intersection found else remove 0 add 1 and check 1 with 2... so on