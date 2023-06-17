
// class Solution {
// public:
//     Node * Cloned(Node * node , vector<Node*>&visited){
//         Node * cloneNode = new Node(node->val);
//         visited[cloneNode->val]=cloneNode;
//         for(Node * nbr : node->neighbors){
//             if(visited[nbr->val]==NULL){
//                 Node * nbrClone = Cloned(nbr,visited);
//                 cloneNode->neighbors.push_back(nbrClone);
//             }else{
//                 cloneNode->neighbors.push_back(visited[nbr->val]);
//             }
//         }
//         return cloneNode;
//     }
//     Node* cloneGraph(Node* node) {
//         if(node == NULL){
//             return NULL;
//         }
//         vector<Node *>visited(101);
//         return Cloned(node,visited);
//     }
// };