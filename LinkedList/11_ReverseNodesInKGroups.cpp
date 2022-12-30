// class Solution
// {
// public:
//     ListNode *th = NULL;
//     ListNode *tt = NULL;
//     int size(ListNode *head)
//     {
//         int len = 0;
//         ListNode *temp = head;
//         while (temp != NULL)
//         {
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }
//     void addFirst(ListNode *node)
//     {
//         if (th == NULL)
//         {
//             th = node;
//             tt = node;
//             node->next = NULL;
//         }
//         else
//         {
//             node->next = th;
//             th = node;
//         }
//     }
//     ListNode *reverseKGroup(ListNode *head, int k)
//     {
//         if (head == NULL || head->next == NULL || k == 1)
//             return head;
//         int len = size(head);
//         ListNode *h = NULL;
//         ListNode *t = NULL;
//         while (len >= k)
//         {
//             int i = k;
//             while (i-- > 0)
//             {
//                 ListNode *b = head->next;
//                 addFirst(head);
//                 head = b;
//             }
//             if (h == NULL)
//             {
//                 h = th;
//                 t = tt;
//             }
//             else
//             {
//                 t->next = th;
//                 t = tt;
//             }
//             th = NULL;
//             tt = NULL;
//             len -= k;
//         }
//         if (head != NULL)
//         {
//             t->next = head;
//         }
//         return h;
//     }
// };