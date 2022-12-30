// class Solution
// {
// public:
//     int length(ListNode *head)
//     {
//         ListNode *temp = head;
//         int size = 0;
//         while (temp != NULL)
//         {
//             temp = temp->next;
//             size++;
//         }
//         return size;
//     }
//     ListNode *swapNodes(ListNode *head, int k)
//     {
//         if (head == NULL || head->next == NULL)
//             return head;
//         int len = length(head);
//         ListNode *kthfromstart = head;
//         ListNode *kthfromlast = head;
//         for (int i = 1; i < k; i++)
//         {
//             kthfromstart = kthfromstart->next;
//         }
//         for (int i = 1; i < len - k + 1; i++)
//         {
//             kthfromlast = kthfromlast->next;
//         }
//         int temp = kthfromstart->val;
//         kthfromstart->val = kthfromlast->val;
//         kthfromlast->val = temp;
//         return head;
//     }
// };