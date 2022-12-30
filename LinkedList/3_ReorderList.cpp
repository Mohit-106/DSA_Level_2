//Recursive O(n) space

// class Solution {
// public:
//     ListNode * left;
//     bool flag=false;
//     void rec(ListNode * right){

//         if(right==NULL){
//             return;
//         }

//         rec(right->next);
//         if(flag==true) return;
//         if(left->next == right || left==right ){
//             right->next=NULL;
//             flag = true;
//         }else{
//             //Backup
//             ListNode * temp = left->next;
//             //Linking
//             left->next = right;
//             right->next=temp;
//             left=temp; 
//             cout<<right->val<<endl;
//         }

//     }
//     void reorderList(ListNode* head) {
//         if(head==NULL || head->next==NULL || head->next->next==NULL){
//             return ;
//         }
//         left = head;
//         rec(head);

//     }
// };

//iterative O(1) space

// class Solution {
// public:

//     ListNode * mid(ListNode * left){
//         ListNode * slow=left;
//         ListNode * fast=left;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode * right = slow->next;
//         slow->next=NULL;
//         return right;
        
//     }

//     ListNode* reverse(ListNode * right){

//         ListNode * prev=NULL;
//         ListNode * curr = right;

//         while(curr!=NULL){
//             //Backup
//             ListNode * temp = curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
//         }

//         return prev;

//     }

//     void reorder(ListNode * left , ListNode * right){

//         ListNode * b1=NULL;
//         ListNode * b2=NULL;
//         while(left!=NULL && right!=NULL){
//             //Backup
//             b1 = left->next;
//             b2 = right->next;
//             //Linking
//             left->next=right;
//             right->next=b1;
//             left=b1;
//             right=b2;
//         }

//     }


//     void reorderList(ListNode* head) {

//         if(head==NULL || head->next==NULL || head->next->next==NULL){
//             return;
//         }
//         ListNode * left = head;
//         ListNode * right = mid(left);
//         ListNode * prev = reverse(right);
//         cout<<left->val<<endl;
//         cout<<right->val<<endl;
//         reorder(head,prev);
//     }
// };
