// class Solution {
// public:
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     if(list1==NULL || list2==NULL) return list1==NULL ? list2 : list1;
    //     ListNode * dummy = new ListNode(-1);
    //     ListNode * l1 = list1;
    //     ListNode * l2 = list2;
    //     ListNode * prev = dummy;

    //     while(l1!=NULL && l2!=NULL){
    //         if(l1->val <= l2->val){
    //             prev->next = l1;
    //             prev = l1;
    //             l1=l1->next;
    //         }else{
    //             prev->next = l2;
    //             prev = l2;
    //             l2=l2->next;
    //         }
    //     }

    //     if(l1!=NULL){
    //         prev->next = l1;
    //     }else{
    //         prev->next = l2;
    //     }

    //     return dummy->next;
    // }
// };



// --------------------------------------------------------------------------------------------------------------

// Using Priority queue

// class Solution
// {
// public:
//     class comp
//     {
//     public:
//         bool operator()(ListNode *a, ListNode *b)
//         {
//             return a->val > b->val;
//         }
//     };

//     ListNode *mergeKLists(vector<ListNode *> &lists)
//     {

//         if (lists.size() == 0)
//         {
//             return NULL;
//         }

//         if (lists.size() == 1)
//         {
//             return lists[0];
//         }

//         priority_queue<ListNode *, vector<ListNode *>, comp> pq;

//         for (ListNode *&node : lists)
//         {
//             if (node != NULL)
//             {
//                 pq.push(node);
//             }
//         }

//         ListNode *dummy = new ListNode();
//         ListNode *curr = dummy;

//         while (pq.size() > 0)
//         {
//             ListNode *top = pq.top();
//             pq.pop();
//             curr->next = top;
//             curr = top;
//             if (top->next != NULL)
//             {
//                 pq.push(top->next);
//             }
//         }

//         return dummy->next;
//     }
// };