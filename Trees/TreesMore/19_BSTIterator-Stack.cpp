// class BSTIterator {
// public:
//     stack<TreeNode*>st;
//     void pushAll(TreeNode* node){
//         while(node){
//             st.push(node);
//             node=node->left;
//         }
//     }
//     BSTIterator(TreeNode* root) {
//         pushAll(root);
//     }
//     int next() {
//         TreeNode * top = st.top();
//         st.pop();
//         pushAll(top->right);
//         return top->val;
//     }
//     bool hasNext() {
//         if(!st.empty()){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };