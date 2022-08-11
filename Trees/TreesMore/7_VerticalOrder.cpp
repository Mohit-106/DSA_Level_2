// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         TreeNode *root;
//         int width;
//         Pair(TreeNode *root, int width)
//         {
//             this->root = root;
//             this->width = width;
//         }
//     };
//     int minHR = 0;
//     int maxHR = 0;
//     unordered_map<int, vector<int>> mp;

//     void verticalTraversalHelper(TreeNode *root)
//     {

//         queue<Pair *> q;
//         Pair *newpair = new Pair(root, 0);
//         q.push(newpair);
//         while (q.size() > 0)
//         {
//             int size = q.size();
//             vector<Pair *> lv;
//             while (size--)
//             {
//                 vector<Pair *> lv;
//                 Pair *front = q.front();
//                 q.pop();
//                 minHR = min(minHR, front->width);
//                 maxHR = max(maxHR, front->width);
//                 // add to map
//                 if (mp.find(front->width) == mp.end())
//                 {
//                     mp[front->width] = vector<int>();
//                 }
//                 mp[front->width].push_back(front->root->val);
//                 lv.push_back(front);
//                 if (front->root->left != NULL)
//                     q.push(new Pair(front->root->left, front->width - 1));
//                 if (front->root->right != NULL)
//                     q.push(new Pair(front->root->right, front->width + 1));
//             }
//         }
//     }

//     vector<vector<int>> verticalTraversal(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             vector<vector<int>> base;
//             return base;
//         }

//         verticalTraversalHelper(root);

//         vector<vector<int>> res(maxHR - minHR + 1, vector<int>());

//         for (int i = minHR, j = 0; i <= maxHR; i++, j++)
//         {

//             res[j] = mp[i];
//         }
//         return res;
//     }
// };