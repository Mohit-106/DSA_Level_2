// class Solution
// {
// public:
//     int Length(ListNode *head)
//     {
//         int size = 0;
//         ListNode *temp = head;
//         while (temp != NULL)
//         {
//             temp = temp->next;
//             size++;
//         }
//         return size;
//     }
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {
//         int len = Length(head);
//         if (n == 1 && len == 1)
//         {
//             return NULL;
//         }
//         if (head == NULL || head->next == NULL)
//             return head;
//         if (len - n == 0)
//         {
//             return head->next;
//         }
//         int idx = len - n + 1;
//         ListNode *dummy = new ListNode(-1);
//         ListNode *temp = dummy;
//         temp->next = head;
//         for (int i = 1; i < idx; i++)
//         {
//             temp = temp->next;
//         }
//         temp->next = temp->next->next;
//         return dummy->next;
//     }
// };