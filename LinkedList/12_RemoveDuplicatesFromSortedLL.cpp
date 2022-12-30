// class Solution
// {
// public:
//     ListNode *thead = NULL;
//     ListNode *ttail = NULL;

//     void addLast(ListNode *node)
//     {
//         if (thead == NULL)
//         {
//             thead = node;
//             ttail = node;
//             node->next = NULL;
//         }
//         else
//         {
//             ttail->next = node;
//             ttail = node;
//             node->next = NULL;
//         }
//     }

//     ListNode *deleteDuplicates(ListNode *head)
//     {

//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode *temp = head;
//         int value = -101;
//         while (temp != NULL)
//         {
//             ListNode *next = temp->next;
//             if (value == temp->val)
//             {
//                 temp->next = NULL;
//             }
//             else
//             {
//                 addLast(temp);
//             }
//             value = temp->val;
//             temp = next;
//         }

//         return thead;
//     }
// };