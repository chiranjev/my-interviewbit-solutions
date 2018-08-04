/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode *slow_ptr=A;
    ListNode *fast_ptr=A;
    while((fast_ptr!=NULL)&&(fast_ptr->next!=NULL)){
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
    }
    if(fast_ptr!=NULL&&fast_ptr->next==NULL){
        slow_ptr=slow_ptr->next;
    }
    ListNode *B = slow_ptr;
    ListNode *curr = NULL;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    curr=B;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        next = curr=next;
    }
    B = prev;

    while(B!=NULL){
        if(A->val!=B->val){
            return 0;
        }
        A=A->next;
        B=B->next;
    }
    return 1;
}
