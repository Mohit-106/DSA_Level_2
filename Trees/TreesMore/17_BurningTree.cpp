
// class Solution
// {
// public:
//     int time = 0;
//     vector<Node *> NodeToRootPath(Node *node, int p)
//     {
//         if (node == NULL)
//         {
//             vector<Node *> base;
//             return base;
//         }
//         if (p == node->data)
//         {
//             vector<Node *> base;
//             base.push_back(node);
//             return base;
//         }

//         vector<Node *> left = NodeToRootPath(node->left, p);
//         if (left.size() > 0)
//         {
//             left.push_back(node);
//             return left;
//         }
//         vector<Node *> right = NodeToRootPath(node->right, p);
//         if (right.size() > 0)
//         {
//             right.push_back(node);
//             return right;
//         }

//         vector<Node *> ans;
//         return ans;
//     }

//     void dfs(Node *node, Node *blocker, int ctime)
//     {
//         if (ctime > time)
//         {
//             time = ctime;
//         }
//         if (node->left != blocker && node->left != NULL)
//         {
//             dfs(node->left, blocker, ctime + 1);
//         }

//         if (node->right != blocker && node->right != NULL)
//         {
//             dfs(node->right, blocker, ctime + 1);
//         }
//     }

//     int minTime(Node *root, int target)
//     {

//         vector<Node *> ntrp = NodeToRootPath(root, target);

//         for (int i = 0; i < ntrp.size(); i++)
//         {
//             Node *blocker;
//             if (i == 0)
//             {
//                 blocker = NULL;
//             }
//             else
//             {
//                 blocker = ntrp[i - 1];
//             }
//             dfs(ntrp[i], blocker, i);
//         }

//         return time;
//     }
// };
