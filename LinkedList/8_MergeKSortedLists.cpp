//1. Divide and conqure strategy

// class Solution {
// public:
//     ListNode * MergeTwoSortedLists(ListNode * l1 , ListNode * l2){
//         if(l1==NULL || l2==NULL) return l1==NULL ? l2 : l1;
//         ListNode * dummy = new ListNode(-1);
//         ListNode * prev = dummy;
//         while(l1!=NULL && l2!=NULL){
//             if(l1->val <= l2->val){
//                 prev->next = l1;
//                 prev=l1;
//                 l1 = l1->next;
//             }else{
//                 prev->next = l2;
//                 prev = l2;
//                 l2 = l2->next;
//             }
//         }
//         if(l1==NULL){
//             prev->next = l2;
//         }else{
//             prev->next = l1;
//         }
//         return dummy->next;
//     }
//     ListNode * merge(vector<ListNode*>& lists, int lo, int hi){
//         if(lo==hi){
//             return lists[lo];
//         }
//         int mid = (lo+hi)/2;
//         ListNode * l1 = merge(lists,lo,mid);
//         ListNode * l2 = merge(lists,mid+1,hi);
//         return MergeTwoSortedLists(l1,l2);
//     }
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//             if(lists.size()==0) return NULL;
//             if(lists.size()==1) return lists[0]; 
//             return merge(lists,0,lists.size()-1);
//     }
// };

//2. Priority queue Approach