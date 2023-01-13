// class Solution
// {
//     public:
//     //Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node *head) {
//         Node * zero = new Node(-1);
//         Node * one = new Node(-1);
//         Node * two = new Node(-1);
//         Node * z = zero;
//         Node * o = one;
//         Node * t = two;
//         Node * temp = head;
//         while(temp!=NULL){
//             Node * nxt = temp->next;
//             if(temp->data==0){
//                 z->next = temp;
//                 z = temp;
//             }else if(temp->data==1){
//                 o->next = temp;
//                 o = temp;
//             }else{
//                 t->next = temp;
//                 t = temp;
//             }
//             temp->next=NULL;
//             temp = nxt;
//         }
//         //link  1->2 and 0->1
//         o->next = two->next;
//         z->next = one->next;
//         return zero->next;
//     }
// };