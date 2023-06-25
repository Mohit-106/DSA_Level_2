// class Solution{
//   public:
//     //Function to sort the given linked list using Merge Sort
    
    
//         Node* mergeTwoSortedLists(Node* list1, Node* list2) {
//         if(list1==NULL || list2==NULL) return list1==NULL ? list2 : list1;
//         Node * dummy = new Node(-1);
//         Node * l1 = list1;
//         Node * l2 = list2;
//         Node * prev = dummy;

//         while(l1!=NULL && l2!=NULL){
//             if(l1->data <= l2->data){
//                 prev->next = l1;
//                 prev = l1;
//                 l1=l1->next;
//             }else{
//                 prev->next = l2;
//                 prev = l2;
//                 l2=l2->next;
//             }
//         }

//         if(l1!=NULL){
//             prev->next = l1;
//         }else{
//             prev->next = l2;
//         }

//         return dummy->next;
//     }
    
//     Node *middleNode(Node *head)
//     {
//         if (head == NULL || head->next == NULL)
//             return head;
//         Node *slow = head;
//         Node *fast = head;
//         while (fast->next != NULL && fast->next->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
    
    
    
//     Node* mergeSort(Node* head) {
        
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
        
//         Node * mid = middleNode(head); 
//         Node * nmid = mid->next;
//         mid->next=NULL;
        
//         Node * left = mergeSort(head);
//         Node * right = mergeSort(nmid);
        
//         return mergeTwoSortedLists(left,right);
        
        
//     }
// };