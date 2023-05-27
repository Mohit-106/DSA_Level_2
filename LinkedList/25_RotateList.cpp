// class Solution
// {
// public:
//     ListNode *reverse(ListNode *temp)
//     {

//         ListNode *curr = temp;
//         ListNode *prev = NULL;
//         ListNode *b;
//         while (curr != NULL)
//         {
//             b = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = b;
//         }
//         return prev;
//     }

//     int size(ListNode *temp)
//     {
//         int len = 0;
//         while (temp != NULL)
//         {
//             len++;
//             temp = temp->next;
//         }
//         return len;
//     }

//     void display(ListNode *temp)
//     {
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//     }

//     ListNode *rotateRight(ListNode *head, int k)
//     {

//         if (head == NULL || k == 0 || head->next == NULL)
//             return head;
//         ListNode *temp = head;
//         int len = size(temp);
//         if (k >= len)
//         {
//             k = k % len;
//         }
//         if (k == 0)
//             return head;
//         ListNode *curr = head;
//         for (int i = 1; i < len - k; i++)
//         {
//             curr = curr->next;
//         }

//         ListNode *prev = reverse(curr->next);
//         display(prev);
//         ListNode *h2 = curr->next;
//         ListNode *t1 = curr;
//         curr->next = NULL;
//         temp = head;
//         ListNode *p2 = reverse(temp);
//         head->next = prev;
//         reverse(p2);
//         return h2;
//     }
// };