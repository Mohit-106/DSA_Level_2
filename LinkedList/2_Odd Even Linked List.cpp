// class Solution
// {
// public:
//     ListNode *oddEvenList(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL)
//         {
//             return head;
//         }
//         ListNode *oddhead = head;
//         ListNode *evenhead = head->next;
//         ListNode *odd = oddhead;
//         ListNode *even = evenhead;
//         ListNode *temp = head->next->next;
//         // we need to break more clear by dry run
//         oddhead->next = NULL;
//         evenhead->next = NULL;
//         int count = 1;
//         while (temp != NULL)
//         {
//             ListNode *nxt = temp->next;
//             temp->next = NULL;
//             if (count % 2 == 0)
//             {
//                 // even
//                 even->next = temp;
//                 even = temp;
//             }
//             else
//             {
//                 // odd
//                 odd->next = temp;
//                 odd = temp;
//             }
//             temp = nxt;
//             count++;
//         }
//         odd->next = evenhead;
//         return oddhead;
//     }
// };