// My First Solution: Fast&Slow Pointer
// 0 ms (< 100%), 6.1 MB (< 5.69%)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fptr = head;
    struct ListNode* sptr = head;
    while(fptr -> next){
        fptr = fptr -> next;
        sptr = sptr -> next;
        if(fptr -> next)
            fptr = fptr -> next;
        else    break;
    }
    return sptr;
}
