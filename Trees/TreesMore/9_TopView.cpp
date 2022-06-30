//  int lhr = 0;
//     int rhr = 0;
//     void range(Node * root,int level){
//         if(root){
//         lhr = min(lhr,level);
//         rhr = max(rhr,level);
//         range(root->left,level-1);
//         range(root->right,level+1);
//         }
        
        
//     }
//     class Pair{
//         public:
//         Node * root;
//         int vl;
//         Pair(Node * root, int vl){
//             this->root = root;
//             this->vl  = vl;
//         }
//     };
    
//     void bfs(vector<int>&res, Node * node){
//         queue<Pair*>q;
//         q.push(new Pair(node,abs(lhr)));
//         while(q.size()>0){
//             int size = q.size();
//             while(size--){
//                 Pair * front = q.front();
//                 q.pop();
//                 if(res[front->vl]==-1){
//                     res[front->vl]=front->root->data;
//                 }
//                 if(front->root->left!=NULL) q.push(new Pair(front->root->left,front->vl-1));
//                 if(front->root->right!=NULL) q.push(new Pair(front->root->right,front->vl+1));

//             }
//         }
//     }
    
//     vector<int> topView(Node *root)
//     {
//         if(root==NULL){
//             vector<int>base;
//             return base;
//         }
//         range(root,0);
//         int size = rhr-lhr+1;
//         vector<int>res(size,-1);
//         bfs(res,root);
//         return res;
//     }