// class Solution {
// public:
    
//     void insertDuplicate(Node * node){
        
//        Node * pre = node;
//        Node * curr = pre->next;
//        while(pre!=NULL){
//            Node * temp  = new Node(pre->val);
//            Node * next = NULL;
//            if(curr!=NULL){
//                next = curr->next;
//            }
           
//            temp->next = pre->next;
//            pre->next = temp;
           
//            pre = curr;
//            curr=next;
//        }
        
//     }
    
//     void setrandom(Node * node){
        
//         Node * temp  = node;
//         while(temp!=NULL){
//             if(temp->random != NULL) temp->next->random = temp->random->next;
//             temp = temp->next->next;
//         }
        
//     }
    
    
//     Node* copyRandomList(Node* head) {
//         if(head==NULL) return head;
//         insertDuplicate(head);
//         setrandom(head);
//         Node * ans = head->next;
//         Node * temp  = head;
//         while(temp->next!=NULL){
//             Node *next  = temp->next;
//             temp->next = temp->next->next;
//             temp = next;
//         }
//         return ans;
//     }
// };