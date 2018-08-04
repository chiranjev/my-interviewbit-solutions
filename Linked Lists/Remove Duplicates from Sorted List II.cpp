/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *dummy = new ListNode(-1);
    dummy->next = A;
    ListNode *prev = dummy;
    ListNode *curr = A;

    while(curr!=NULL){
        while(curr->next!=NULL&&prev->next->val == curr->next->val){
            curr=curr->next;
        }
        if(prev->next == curr){
            prev=prev->next;
        }else{
            prev->next = curr->next;
        }
        curr=curr->next;
    }

    A = dummy->next;
    return A;


}
