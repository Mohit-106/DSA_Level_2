//         // Step 1. make an array of size k
//         // Step 2. Now assign n/k elements to each cell (Min element in one cell)
//         // Step 3. While assigning min elements to each cell assign one of m elements to each cell
//         //  where m = n%k

// class Solution
// {
// public:
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

//     vector<ListNode *> splitListToParts(ListNode *head, int k)
//     {

//         ListNode *temp = head;
//         int n = size(temp);
//         // cout<<n<<endl;
//         vector<ListNode *> ans(k);
//         if (head == NULL)
//             return ans;
//         int min_size = n / k;
//         int extra_ele = n % k;
//         ListNode *curr = head;

//         int i = 0;
//         if (n < k)
//         {
//             while (curr != NULL && i < k)
//             {
//                 ListNode *b = curr->next;
//                 ans[i] = curr;
//                 i++;
//                 curr->next = NULL;
//                 curr = b;
//             }
//             return ans;
//         }

//         while (curr != NULL && i < k)
//         {
//             for (int i = 0; i < min_size - 1; i++)
//             {
//                 curr = curr->next;
//             }
//             if (extra_ele > 0)
//             {
//                 curr = curr->next;
//                 extra_ele--;
//             }
//             ans[i] = head;
//             if (curr != NULL)
//             {
//                 head = curr->next;
//                 curr->next = NULL;
//             }
//             i++;
//             curr = head;
//         }

//         return ans;
//     }
// };