// class Solution
// {
// public:
//     ListNode *left;
//     bool check = 1;
//     void fold(ListNode *right)
//     {

//         if (right == NULL)
//         {
//             return;
//         }

//         fold(right->next);
//         // work
//         if (check)
//         {
//             if (left == right || left->next == right)
//             {
//                 right->next = NULL;
//                 check = false;
//             }
//             else
//             {
//                 ListNode *temp = left->next;
//                 left->next = right;
//                 right->next = temp;
//                 left = temp;
//             }
//         }
//     }

//     void reorderList(ListNode *head)
//     {

//         if (head == NULL || head->next == NULL)
//         {
//             return;
//         }

//         left = head;
//         fold(head);
//     }
// };