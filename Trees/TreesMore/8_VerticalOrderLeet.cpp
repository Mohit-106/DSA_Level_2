// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
    
//     int minRange = INT_MAX;
//     int maxRange = INT_MIN;
//     map<int,vector<int>>mp;
//     void range(TreeNode * node , int hl){
//         if(node){
//             minRange = min(hl,minRange);
//             maxRange = max(hl,maxRange);
//             range(node->left, hl-1);
//             range(node->right, hl+1);
//         }
//     }
    
//     class Pair{
//         public:
//         TreeNode * node;
//         int level;
//         Pair(TreeNode * node, int level){
//             this->node = node;
//             this->level = level;
//         }
        
//     };
    
//     void bfs(TreeNode * node){
        
//         queue<Pair*>q;
//         int r = -1*minRange;
//         q.push(new Pair(node,r));
//         while(q.size()>0){
//             int size = q.size();
//             priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//             while(size--){
//                 Pair * pr = q.front();
//                 q.pop();
//                 pq.push(make_pair(pr->node->val,pr->level));
//                 if(pr->node->left != NULL) q.push(new Pair(pr->node->left,pr->level-1));
//                 if(pr->node->right!=NULL)q.push(new Pair(pr->node->right,pr->level+1));
//             }
//             while(pq.size()>0){
//                 pair<int,int> pr = pq.top();
//                 pq.pop();
//                 mp[pr.second].push_back(pr.first); 
//             }  
//         }
        
        
//     }
    
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         if(root==NULL){
//             vector<vector<int>>base;
//             return base;
//         }
//         range(root,0);
//         int n = maxRange - minRange + 1;
//         vector<vector<int>>ans(n,vector<int>());
//         bfs(root);
//         for(int i = 0; i<n;i++){
//             ans[i] = mp[i];
//         }
//         return ans;
//     }
// };