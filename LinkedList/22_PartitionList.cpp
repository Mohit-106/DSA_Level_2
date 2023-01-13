// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {

//         if(head==NULL) return head;

//         ListNode * less = new ListNode(-1);
//         ListNode * greater = new ListNode(-1);
//         ListNode * l = less;
//         ListNode * g = greater;
//         ListNode * temp = head;
//         ListNode * backup;
//         while(temp!=NULL){
//             backup = temp->next;
//             if(temp->val<x){
//                 l->next = temp;
//                 l = temp;
//                 temp->next = NULL;
//             }else{
//                 g->next = temp;
//                 g = temp;
//                 temp->next=NULL;
//             }
//             temp = backup;
//         }

//         l->next = greater->next;
//         return less->next;
//     }
// };