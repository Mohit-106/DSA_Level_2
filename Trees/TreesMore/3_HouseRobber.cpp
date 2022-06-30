// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int inc, exc;
//         Pair(int inc, int exc)
//         {
//             this->inc = inc;
//             this->exc = exc;
//         }
//         Pair()
//         {
//         }
//     };

//     Pair *Hr(TreeNode *root)
//     {

//         if (root == NULL)
//         {
//             Pair *base = new Pair(0, 0);
//             return base;
//         }

//         Pair *left = Hr(root->left);
//         Pair *right = Hr(root->right);
//         Pair *newPair = new Pair();
//         newPair->inc = left->exc + right->exc + root->val;
//         newPair->exc = max(left->inc, left->exc) + max(right->inc, right->exc);
//         return newPair;
//     }

//     int rob(TreeNode *root)
//     {

//         Pair *ans = Hr(root);
//         return max(ans->inc, ans->exc);
//     }
// };