// class NumArray {
// public:
//     class Node {
//         public:
//         int val; int str; int end;
//         Node * left; Node * right;
//     };
//     Node * root;
//     Node * construct(vector<int>&nums, int lo, int hi){
//         if(lo==hi){
//             Node * base = new Node();
//             base->str = lo; base->end=hi;
//             base->left=NULL; base->right=NULL;
//             base->val = nums[lo];
//             return base;
//         }
        
//         Node * node = new Node();
//         node->str = lo;
//         node->end = hi;
//         int mid = (lo+hi)/2;
//         node->left = construct(nums,lo,mid);
//         node->right = construct(nums,mid+1,hi);
//         node->val = node->left->val + node->right->val;
//         return node;
        
//     }
//     void disp(Node *root){
//         if(root){
//           cout<<root->val<<endl;
//           if(root->left!=NULL){
//              cout<<root->left->val<<" "<<root->right->val<<endl;
//           }
//           disp(root->left);
//           disp(root->right);
//         }
//     }
        
//     NumArray(vector<int>& nums) {
//         root = construct(nums,0,nums.size()-1);
//         //disp(root);
//     }
//     void updateHelper(Node * node , int idx , int val){
//         if(node->str == node->end){
//             node->val = val;
//             return;
//         }
//         int mid = (node->str+node->end)/2;
//         if(idx<=mid){
//             updateHelper(node->left,idx,val);
//         }else{
//             updateHelper(node->right,idx,val);
//         }
//         node->val = node->left->val + node->right->val;
//     }
    
//     void update(int index, int val) {
//         updateHelper(root,index,val);
//     }
    
//     int qSum(Node * node, int lo, int hi){
//         //no overlaping
//         if(hi < node->str || lo>node->end){
//             return 0;
//         }
//         //Complete overlaping
//         //range occupies the segment(node range)
//         else if(lo<=node->str && hi>=node->end){
//             return node->val;
//         }else{
//         //partial overlaping
//         int val1 = qSum(node->left,lo,hi);
//         int val2 = qSum(node->right,lo,hi);
//         return val1+val2;
//         }
       
//     }
    
//     int sumRange(int left, int right) {
//         return qSum(root,left,right);
//     }
// };
