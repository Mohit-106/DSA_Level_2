//Learning -> How make 2 tree out of one tree
//https://practice.geeksforgeeks.org/problems/clone-a-binary-tree/1/



// class Solution{
//   public:
  
//   void LeftCloneTree(Node* node){
//       if(node==NULL){
//           return ;
//       }
      
//       LeftCloneTree(node->left);
//       LeftCloneTree(node->right);
      
//       Node* newNode = new Node(node->data);
//       newNode->random = NULL;
//       newNode->left = node->left;
//       node->left = newNode;
      
//   }
  
//   void SetRandom(Node * node){
//       if(node==NULL){
//           return ;
//       }
      
//       SetRandom(node->left->left);
//       SetRandom(node->right);
//       if(node->random!=NULL){
//           node->left->random = node->random->left;
//       }
//   }
  
//   Node* DuplicateTree(Node * node){
      
//       if(node==NULL){
//           return NULL;
//       }
      
//       Node * left = DuplicateTree(node->left->left);
//       Node * right = DuplicateTree(node->right);
      
//       Node * dup =  node->left;
//       node->left = node->left->left;
      
//       dup->left = left;
//       dup->right=right;
      
//       return dup;
//   }
//     Node* cloneTree(Node* tree)
//     {
        
//         LeftCloneTree(tree);
//         SetRandom(tree);
//         Node * ans = DuplicateTree(tree);
//         return ans;
       
//     }
// };
