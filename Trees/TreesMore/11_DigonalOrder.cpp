// vector<int> diagonal(Node *root)
// {
//    if(root==NULL){
//        vector<int>res;
//        return res;
//    }
//    vector<int>res;
//    queue<Node*>q;
//    q.push(root);
//    while(q.size()>0){
//        int size = q.size();
//        while(size--){
           
//            Node * front = q.front();
//            q.pop();
           
//            while(front!=NULL){
//                res.push_back(front->data);
//                if(front->left!=NULL)q.push(front->left);
//                front=front->right;
//            }
           
//        }
       
//    }
//    return res;
// }