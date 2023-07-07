// class Solution {
// public:
   
//    class Pair{
//        public: 
//        TreeNode * node =  NULL;
//        int level=0;
//        Pair(TreeNode * node, int level){
//            this->node = node;
//            this->level = level;
//        }
//        Pair(){

//        }
//     };

//     TreeNode * solverleft(stack<Pair *>&st){

//         while(st.size()>0){
//             Pair * top = st.top();
//             if(top->level == 0){
//                 top->level++;

//                 if(top->node->left!=NULL){
//                     Pair * newpair = new Pair();
//                     newpair->node = top->node->left;
//                       st.push(newpair);
//                 } 
              
//             }else if(top->level == 1){
//                 top->level ++;
//                 if(top->node->right!=NULL){
//                     Pair * newpair = new Pair();
//                     newpair->node = top->node->right;
//                     st.push(newpair);
//                 } 
//                 return top->node;
//             }else{
//                 st.pop();
//             }
//         }
//         return NULL;

//     }

    
//     TreeNode * solverright(stack<Pair*>&st){

//         while(st.size()>0){
//             Pair * top = st.top();
//             if(top->level == 0){
//                 top->level++;
//                 if(top->node->right!=NULL){
//                     Pair * newpair = new Pair();
//                     newpair->node = top->node->right;
//                     st.push(newpair);
//                 } 
//             }else if(top->level == 1){
//                 top->level ++;
//                 if(top->node->left!=NULL){
//                     Pair * newpair = new Pair();
//                     newpair->node = top->node->left;
//                     st.push(newpair);
//                 } 
//                 return top->node;
//             }else{
//                 st.pop();
//             }
//         }

//         return NULL;

//     }



//     bool findTarget(TreeNode* root, int k) {

//         stack<Pair*>ls;
//         stack<Pair*>rs;
//         ls.push(new Pair(root,0));
//         rs.push(new Pair(root,0));
//         TreeNode * left = solverleft(ls);
//         TreeNode * right = solverright(rs);

//         while(left->val < right->val){
//             //cout<<left->val<<" "<<right->val<<endl;
//             if(left->val + right->val > k){
//                 right = solverright(rs);
//             }else if(left->val + right->val < k){
//                 left = solverleft(ls);
//             }else{
//                 return true;
//             }

//         }

//         return false;
        

//     }
// };