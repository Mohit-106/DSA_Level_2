// class Solution
// {
// public:
//     // Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//         if (root == NULL)
//         {
//             vector<int> base(0);
//             return base;
//         }

        // queue<Node *> q;
        // q.push(root);
        // vector<int> ans;
        // while (q.size() > 0)
        // {
        //     int size = q.size();
        //     ans.push_back(q.front()->data);
        //     while (size-- > 0)
        //     {
        //         Node *front = q.front();
        //         q.pop();
        //         if (front->right != NULL)
        //             q.push(front->right);
        //         if (front->left != NULL)
        //             q.push(front->left);
        //     }
        // }
        // return ans;
//     }
// };