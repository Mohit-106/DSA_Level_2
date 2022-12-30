// class Solution {
// public:
//     ListNode * mid(ListNode * head){
//         if(head==NULL || head->next==NULL) return head;
//         ListNode * slow = head;
//         ListNode * fast = head;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode *  middle  = slow->next;
//         slow->next = NULL;
//         return middle;
//     }
//     ListNode * merge(ListNode * l1 , ListNode * l2){
//         if(l1==NULL || l2==NULL) return l1==NULL ? l2 : l1;
//         ListNode * dummy = new ListNode(-1);
//         ListNode * prev = dummy;
//         while(l1!=NULL && l2 != NULL){
//             if(l1->val <= l2->val){
//                 prev->next = l1;
//                 prev  = l1;
//                 l1 = l1->next;
//             }else{
//                 prev->next = l2;
//                 prev = l2;
//                 l2=l2->next;
//             }
//         }
//         if(l1!=NULL){
//             prev->next = l1;
//         }else if(l2!=NULL){
//             prev->next = l2;
//         }
//         return dummy->next;
//     }
//     ListNode * mergeSort(ListNode * head){
//         if(head==NULL || head->next == NULL){
//             return head;
//         }
//         ListNode *  middle = mid(head);
//         ListNode * l1 = mergeSort(head);
//         ListNode * l2 = mergeSort(middle);
//         return merge(l1,l2);
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         return mergeSort(head);
//     }
// };