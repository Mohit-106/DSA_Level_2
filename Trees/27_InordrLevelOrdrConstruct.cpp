// https://practice.geeksforgeeks.org/problems/construct-tree-from-inorder-and-levelorder/1/

// Node * helper(int inorder[], unordered_map<int,int>&mp, int inlo, int inhi){
//     if(inlo > inhi){
//         return NULL;
//     }
//     int minidx = inlo;

//     for(int i = inlo+1 ; i<=inhi; i++){

//         if(mp[inorder[i]]<mp[inorder[minidx]]){
//             minidx = i;
//         }

//     }

//     Node * newNode = new Node(inorder[minidx]);

//     newNode->left = helper(inorder, mp, inlo,minidx-1);
//     newNode->right= helper(inorder, mp, minidx+1,inhi);

//     return newNode;

// }
// Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
// {
//     unordered_map<int,int>mp;
//     for(int i =0 ; i<n; i++){
//         mp[levelOrder[i]]=i;
//     }

//     return helper(inorder, mp, iStart,  iEnd );
// }