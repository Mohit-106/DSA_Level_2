


// int idx=0;
// Node * helper(int post[], int size , long ll, long rl){{
//     if(idx<0 || post[idx] <=  ll || post[idx] >= rl){
//         return NULL;
//     }
    
//     Node * node = new Node(post[idx--]);
//     node->right = helper(post,size,node->data,rl);
//     node->left = helper(post,size,ll,node->data);
//     return node;
    
    
    
// }
    
// }
// Node *constructTree (int post[], int size)
// {
//     idx = size-1;
//     long ll = -(10e9)-1;
//     long rl = 10e9+1;
//     return helper(post,size,ll,rl);
// }