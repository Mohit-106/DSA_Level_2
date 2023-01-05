// class Solution
// {
// public:
//     ListNode *reverse(ListNode *head)
//     {
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *temp;
//         while (curr != NULL)
//         {
//             temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }
//     ListNode *add(ListNode *l1, ListNode *l2)
//     {
//         ListNode *dummy = new ListNode(-1);
//         ListNode *ptr = dummy;
//         int carry = 0;
//         while (l1 != NULL && l2 != NULL)
//         {
//             int val = l1->val + l2->val + carry;
//             int rem = val % 10;
//             ListNode *temp = new ListNode(rem);
//             ptr->next = temp;
//             ptr = temp;
//             carry = val / 10;
//             l1 = l1->next;
//             l2 = l2->next;
//         }
//         if (l1 != NULL)
//         {
//             while (l1 != NULL)
//             {
//                 int val = l1->val + carry;
//                 int rem = val % 10;
//                 ListNode *temp = new ListNode(rem);
//                 ptr->next = temp;
//                 ptr = temp;
//                 carry = val / 10;
//                 l1 = l1->next;
//             }
//         }
//         else if (l2 != NULL)
//         {
//             while (l2 != NULL)
//             {
//                 int val = l2->val + carry;
//                 int rem = val % 10;
//                 ListNode *temp = new ListNode(rem);
//                 ptr->next = temp;
//                 ptr = temp;
//                 carry = val / 10;
//                 l2 = l2->next;
//             }
//         }
//         if (carry > 0)
//         {
//             ListNode *temp = new ListNode(carry);
//             ptr->next = temp;
//         }
//         return dummy->next;
//     }
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {
//         if (l1 == NULL || l2 == NULL)
//             return l1 == NULL ? l2 : l1;
//         // reverse(l1);
//         // reverse(l2);z
//         return add(l1, l2);
//     }
// };