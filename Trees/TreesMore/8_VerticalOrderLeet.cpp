//sorted node in same position
//here at the palce of set we can also use priority queue


// class Solution {
// public:
//     unordered_map<int,vector<int>>mp;
//     int minHR=0;
//     int maxHR=0;
//     void verticalTraversalHelper(TreeNode * node){
        
//         queue<pair<TreeNode*,int>>q;
//         q.push(make_pair(node,0));
//         while(q.size()>0){
//             int size = q.size();
//             multiset<pair<int,int>>s;
//             while(size--){
//                 auto front = q.front();
//                 q.pop();
//                 minHR = min(minHR,front.second);
//                 maxHR = max(maxHR,front.second);
//                 s.insert(make_pair(front.first->val,front.second));
//                 if(front.first->left!=NULL) q.push(make_pair(front.first->left,front.second-1));
//                 if(front.first->right!=NULL) q.push(make_pair(front.first->right,front.second+1));
                
//             }
//             for(auto pr:s){
//                  if(mp.find(pr.second)==mp.end()){
//                   mp[pr.second]=vector<int>();
//                 }
//                 mp[pr.second].push_back(pr.first);
//             }
           
//         }
        
        
//     }
    
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         if(root==NULL){
//             vector<vector<int>>base;
//             return base;
//         }
        
//         verticalTraversalHelper(root);
//         vector<vector<int>>res(maxHR-minHR+1,vector<int>());
//         for(int i=minHR,j=0;i<=maxHR;i++,j++){
//             res[j]=mp[i];
//         }
        
//         return res;
        
//     }
// };