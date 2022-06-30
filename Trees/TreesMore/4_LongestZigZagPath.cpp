// class Solution
// {
// public:
//     class Pair
//     {
//     public:
//         int lzz, rzz;
//         Pair(int lzz, int rzz)
//         {
//             this->lzz = lzz;
//             this->rzz = rzz;
//         }
//         Pair()
//         {
//         }
//     };
//     int maxPath = 0;
//     Pair *findPath(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             Pair *base = new Pair(-1, -1);
//             return base;
//         }

//         Pair *left = findPath(root->left);
//         Pair *right = findPath(root->right);

//         Pair *newpair = new Pair();
//         newpair->lzz = left->rzz + 1;
//         newpair->rzz = right->lzz + 1;
//         int msf = max(newpair->lzz, newpair->rzz);
//         maxPath = max(msf, maxPath);
//         return newpair;
//     }

//     int longestZigZag(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             return -1;
//         }

//         findPath(root);
//         return maxPath;
//     }
// };