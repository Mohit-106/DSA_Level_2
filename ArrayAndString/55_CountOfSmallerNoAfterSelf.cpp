// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int val;
//         int idx;
//         Pair(int val, int idx)
//         {
//             this->val = val;
//             this->idx = idx;
//         }
//     };
//     vector<int> ans;
//     vector<Pair *> mergeTwoSortedArrays(vector<Pair *> &a, vector<Pair *> &b)
//     {
//         if (a.size() == 0 || b.size() == 0)
//         {
//             return a.size() == 0 ? b : a;
//         }
//         vector<Pair *> res(a.size() + b.size());
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         while (i < a.size() && j < b.size())
//         {
//             if (a[i]->val > b[j]->val)
//             {
//                 ans[a[i]->idx] += b.size() - j;
//                 res[k++] = a[i++];
//             }
//             else
//             {
//                 res[k++] = b[j++];
//             }
//         }
//         while (i < a.size())
//         {
//             res[k++] = a[i++];
//         }
//         while (j < b.size())
//         {
//             res[k++] = b[j++];
//         }
//         return res;
//     }
//     vector<Pair *> mergeSort(vector<Pair *> &v, int lo, int hi)
//     {
//         if (lo == hi)
//         {
//             vector<Pair *> base;
//             base.push_back(v[lo]);
//             return base;
//         }
//         int mid = (lo + hi) / 2;
//         vector<Pair *> lh = mergeSort(v, lo, mid);
//         vector<Pair *> rh = mergeSort(v, mid + 1, hi);
//         return mergeTwoSortedArrays(lh, rh);
//     }

//     vector<int> countSmaller(vector<int> &nums)
//     {
//         vector<int> copy(nums.size());
//         ans = copy;
//         vector<Pair *> v(nums.size());
//         for (int i = 0; i < nums.size(); i++)
//         {
//             v[i] = new Pair(nums[i], i);
//         }
//         mergeSort(v, 0, nums.size() - 1);
//         return ans;
//     }
// };