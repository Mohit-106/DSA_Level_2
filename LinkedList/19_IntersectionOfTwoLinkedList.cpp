// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         ListNode *temp = headA;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = headB;

//         ListNode *slow = headA;
//         ListNode *fast = headA;

//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//             if (slow == fast)
//                 break;
//         }

//         if (slow != fast)
//         {
//             temp->next = NULL;
//             return NULL;
//         }

//         slow = headA;
//         while (fast != slow)
//         {
//             slow = slow->next;
//             fast = fast->next;
//         }
//         temp->next = NULL;
//         return slow;
//     }
// };