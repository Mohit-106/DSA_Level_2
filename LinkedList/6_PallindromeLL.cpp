//Recursive
//O(n) space
// class Solution
// {
// public:
//     ListNode *first;
//     int size = 0;
//     bool helper(ListNode *head, int count)
//     {
//         if (head == NULL)
//         {
//             size = count;
//             return true;
//         }
//         bool check = helper(head->next, count + 1);
//         if (check == false)
//             return false;
//         if (count >= size / 2)
//         {
//             if (first->val != head->val)
//                 return false;
//         }
//         first = first->next;
//         return true;
//     }
//     bool isPalindrome(ListNode *head)
//     {
//         first = head;
//         return helper(head, 0);
//     }
// };


//O(1) space  
//Iterative 
// class Solution {
// public:

//     ListNode * middle(ListNode * thead){
//         if(thead==NULL || thead->next==NULL) return thead;
//         ListNode * slow = thead;
//         ListNode * fast = thead;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode * mid = slow->next;
//         slow->next=NULL;
//         return mid;
//     }

//     ListNode * reverse(ListNode * start){
//         if(start==NULL || start->next==NULL) return start;
//         ListNode * prev = NULL;
//         ListNode * curr = start;
//         ListNode * next = NULL;
//         while(curr!=NULL){
//             next = curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }


//     bool isPalindrome(ListNode* head) {
//         if(head==NULL) return true; 
//         ListNode * thead = head;
//         ListNode * mid = middle(thead);
//         ListNode * start = mid;
//         ListNode * head2 = reverse(start);

//         while(head!=NULL && head2!=NULL){
//             if(head->val != head2->val) return false;
//             head=head->next;
//             head2=head2->next;
//         }

//         return true;

//     }
// };