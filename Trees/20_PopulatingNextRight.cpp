// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
// https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/

// Populating 1
//  class Solution {
//  public:
//      void helper(Node * root){
//           while(root->left!=NULL){
//              Node * temp = root;
//              while(temp!=NULL){
//                  temp->left->next = temp->right;
//                  if(temp->next!=NULL){
//                      temp->right->next = temp->next->left;
//                  }

//                 temp=temp->next;
//             }
//             root=root->left;
//         }
//     }
//     Node* connect(Node* root) {
//         if(root==NULL){
//             return NULL;
//         }
//         helper(root);
//         return root;

//     }
// };



// Populating 2
// class Solution
// {
// public:
//     void helper(Node *root)
//     {
//         Node *head = NULL;
//         Node *tail = NULL;
//         while (root != NULL)
//         {
//             while (root != NULL)
//             {
//                 if (root->left != NULL)
//                 {
//                     if (head == NULL)
//                     {
//                         head = root->left;
//                         tail = root->left;
//                     }
//                     else
//                     {
//                         tail->next = root->left;
//                         tail = root->left;
//                     }
//                 }

//                 if (root->right != NULL)
//                 {
//                     if (head == NULL)
//                     {
//                         head = root->right;
//                         tail = root->right;
//                     }
//                     else
//                     {
//                         tail->next = root->right;
//                         tail = root->right;
//                     }
//                 }
//                 root = root->next;
//             }

//             root = head;
//             head = NULL;
//             tail = NULL;
//         }
//     }

//     Node *connect(Node *root)
//     {
//         Node *curr = root;
//         helper(curr);
//         return root;
//     }
// };