// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
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

//         ListNode *ptr = NULL;

//         int carry = 0;

//         while (l1 != NULL && l2 != NULL)
//         {
//             int val = l1->val + l2->val + carry;
//             int rem = val % 10;
//             ListNode *temp = new ListNode(rem);
//             temp->next = ptr;
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
//                 temp->next = ptr;
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
//                 temp->next = ptr;
//                 ptr = temp;
//                 carry = val / 10;
//                 l2 = l2->next;
//             }
//         }

//         if (carry > 0)
//         {
//             ListNode *temp = new ListNode(carry);
//             temp->next = ptr;
//             ptr = temp;
//         }
//         return ptr;
//     }

//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {

//         if (l1 == NULL || l2 == NULL)
//             return l1 == NULL ? l2 : l1;

//         return add(reverse(l1), reverse(l2));
//     }
// };