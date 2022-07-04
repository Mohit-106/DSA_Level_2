// prev-current(dummy Node methode)
//  class Solution
//  {
//      public:
//      Node * prev = NULL;
//      void helper(Node * root){
//          if(root==NULL) return;
//          helper(root->left);
//          prev->right = root;
//          root->left = prev;
//          prev = root;
//          helper(root->right);

//     }

//     Node * bToDLL(Node *root)
//     {
//         if(root==NULL || (root->left==NULL && root->right==NULL)) return root;
//         Node * head = root;
//         Node * dummy = new Node();
//         dummy->data=-1;
//         dummy->left=NULL;
//         dummy->right=NULL;
//         prev=dummy;
//         while(head->left!=NULL){
//             head = head->left;
//         }
//         helper(root);
//         head->left =NULL;
//         dummy->right = NULL;
//         return head;
//     }
// };

// return type method
//  class Solution
//  {
//      //Function to convert binary tree into circular doubly linked list.
//      Node bTreeToClist(Node root)
//      {
//          return helper(root);
//      }

//     Node helper(Node node){
//         if(node == null){
//             return null;
//         }

//         Node lhead = helper(node.left);
//         Node rhead = helper(node.head);

//         Node nhead = node;
//         nhead.left = nhead.right = nhead;

//         Node s1 = concat(lhead, nhead);
//         Node s2 = concat(s1, rhead);

//         return s2;
//     }

//     Node concat(Node l1head, Node l2head){
//         if(l1head == null){
//             return l2head;
//         }

//         if(l2head == null){
//             return l1head;
//         }

//         Node l1tail = l1head.left;
//         Node l2tail = l2head.left;

//         l1tail.right = l2head;
//         l2head.left = l1tail;

//         l1head.left = l2tail;
//         l2tail.right = l1head;

//         return l1head;
//     }

// }
