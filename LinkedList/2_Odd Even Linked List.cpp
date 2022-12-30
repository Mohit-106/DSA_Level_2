// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL || head->next->next==NULL){
//             return head;
//         }

//         ListNode * ehead = head->next;
//         ListNode * odd = head;
//         ListNode * even = head->next;

//         while(odd!=NULL && even!=NULL){
//             ListNode * temp = even->next;
//             odd->next = temp;
//             odd=temp;
//             if(temp!=NULL){
//                 even->next = temp->next;
//                 even = temp->next;
//             }
//         }

//         ListNode * oddtail = head;
//         while(oddtail->next != NULL){
//             oddtail = oddtail->next;
//         }

//         oddtail->next = ehead;
//         return head;

//     }
// };