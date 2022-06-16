// Level Order Travarsal

// class Solution {
// public:
    
//     vector<vector<int>> levelOrder(TreeNode* root) {
        
//         vector<vector<int>> ans;
//         if(root==NULL){
            
//             return ans;
            
//         }
        
//         vector<int>helper;
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(NULL);
//         while(q.size()>0){
//             TreeNode * top = q.front();
//             q.pop();
//             if(top!=NULL){
//               helper.push_back(top->val);
//              if(top->left!=NULL){
//                  q.push(top->left);
//              }
//              if(top->right!=NULL){
//                  q.push(top->right);
//              }
                
//             }else{
//                 ans.push_back(helper);
//                 if(q.size()>0){
//                      q.push(NULL);  
//                      helper.clear();
//                 }
               
               
                
//             }
            
//         }
        
//         return ans;
        
        
        
        
        
        
        
        
//     }
// };