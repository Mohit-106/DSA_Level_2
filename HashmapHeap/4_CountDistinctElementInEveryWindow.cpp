// class Solution{
//   public:
//     vector <int> countDistinct (int arr[], int n, int k)
//     {
//         unordered_map<int,int>fmap;
//         for(int x = 0; x<k; x++){
//             fmap[arr[x]]++;
//         }
//         vector<int>ans;
//         ans.push_back(fmap.size());
//         int i = 0;
//         int j = k;
//         while(j<n){
//             fmap[arr[i]]--;
//             if(fmap[arr[i]]==0) fmap.erase(arr[i]);
//             fmap[arr[j]]++;
//             ans.push_back(fmap.size());
//             i++;
//             j++;
//         }
//         return ans;
//     }
// };


//Do try this too
///992. Subarrays with K Different Integers
