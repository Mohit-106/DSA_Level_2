// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         TreeNode *node;
//         int idx;
//         Pair(TreeNode *node, int idx)
//         {
//             this->node = node;
//             this->idx = idx;
//         }
//     };

//     int widthOfBinaryTree(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             return 0;
//         }
//         long width = 0;
//         queue<Pair *> q;
//         q.push(new Pair(root, 0));
//         while (q.size() > 0)
//         {
//             int size = q.size();
//             long lidx = q.front()->idx;
//             long ridx = q.front()->idx;
//             while (size--)
//             {
//                 Pair *front = q.front();
//                 q.pop();
//                 ridx = front->idx;
//                 if (front->node->left != NULL)
//                     q.push(new Pair(front->node->left, 2 * ridx + 1));
//                 if (front->node->right != NULL)
//                     q.push(new Pair(front->node->right, 2 * ridx + 2));
//             }
//             width = max(width, ridx - lidx + 1);
//         }
//         return width;
//     }
// };