// class Solution
// {
// public:
//     ListNode *deleteDuplicates(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode *dummy = new ListNode(-1);
//         ListNode *prev = dummy;
//         ListNode *curr = head->next;
//         dummy->next = head;
//         while (curr != NULL)
//         {
//             bool flag = false;
//             while (curr != NULL && prev->next->val == curr->val)
//             {
//                 curr = curr->next;
//                 flag = true;
//             }
//             if (flag)
//             {
//                 prev->next = curr;
//             }
//             else
//             {
//                 prev = prev->next;
//             }
//             if (curr != NULL)
//                 curr = curr->next;
//         }
//         return dummy->next;
//     }
// };