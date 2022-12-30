//Data pointer iterative

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         // if(head->next==NULL) return head;
//         ListNode * prev=NULL;
//         ListNode * curr=head;
//         ListNode * next;
//         while(curr!=NULL){
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }

//         return prev;
//     }
// };


//Data recursive

// class Solution {
// public:
//    ListNode* first;
//    int size ;
//    void rec(ListNode * head, int count){
//        if(head==NULL){
//            size=count-1;
//             return;
//        }   
//        rec(head->next,count+1);
//        if(count>size/2){
//            int temp = head->val;
//            head->val = first->val;
//            first->val = temp;
//        }
//        first=first->next;
//    }
//    ListNode* reverseList(ListNode* head) {
//         if(head==NULL) return head;
//         first=head;
//         ListNode * thead = head;
//         rec(thead,1);
//         return head;
//     }
// };