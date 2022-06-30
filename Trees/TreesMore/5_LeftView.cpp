//Application of LOT(count method)

// vector<int> leftView(Node *root)
// {

//     if (root == NULL)
//     {
//         vector<int> base(0);
//         return base;
//     };
//     queue<Node *> q;
//     q.push(root);
//     vector<int> result;
//     while (q.size() > 0)
//     {
//         int size = q.size();
//         result.push_back(q.front()->data);
//         while (size-- > 0)
//         {
//             Node *front = q.front();
//             q.pop();
//             if (front->left != NULL)
//                 q.push(front->left);
//             if (front->right != NULL)
//                 q.push(front->right);
//         }
//     }
//     return result;
// }
