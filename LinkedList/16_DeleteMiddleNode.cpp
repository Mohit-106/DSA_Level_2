// class Solution
// {
// public:
//     ListNode *mid(ListNode *head)
//     {

//         ListNode *slow = head;
//         ListNode *fast = head;

//         while (fast->next->next != NULL && fast->next->next->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }

//     ListNode *deleteMiddle(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL)
//             return NULL;
//         if (head->next->next == NULL)
//         {
//             head->next = NULL;
//             return head;
//         }

//         ListNode *idx = mid(head);
//         idx->next = idx->next->next;
//         return head;
//     }
// };