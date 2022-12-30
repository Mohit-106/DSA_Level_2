// class Solution{
// public:
//     Node* divide(int N, Node *head){
//         if(head==NULL || head->next==NULL) return head;
//         Node * even = new Node(-1);
//         Node * odd = new Node(-2);
//         Node * o = odd;
//         Node * e = even;
//         Node * curr = head;
//         while(curr!=NULL){
//             Node * b = curr->next;
//             if(curr->data%2!=1){
//                 e->next = curr;
//                 e=curr;
//             }else{
//                 o->next = curr;
//                 o=curr;
//             }
//             curr->next=NULL;
//             curr=b;
//         }
//         e->next = odd->next;
//         return even->next;
//     }
// };