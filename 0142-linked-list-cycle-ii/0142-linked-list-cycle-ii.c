/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    bool isCycle=false;
    struct ListNode* slowp=head;
    struct ListNode* fastp=head;
    
    while(slowp!=NULL && fastp!=NULL)
    {
        slowp=slowp->next;
        if(fastp->next==NULL)
            return false;
        fastp=fastp->next->next;
        if(slowp==fastp)
        {
            isCycle=true;
            break;
        }
    }
    if(!isCycle)
        return NULL;
    slowp=head;
    while(slowp!=fastp)
    {
        slowp=slowp->next;
        fastp=fastp->next;
    }
    return slowp;
}