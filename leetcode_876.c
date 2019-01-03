/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if(head == NULL)
    {
        return NULL;
    }
    struct ListNode* i = head;
    struct ListNode* j = head;
    while(i)
    {
        i = i->next;
        if(i)
        j = j->next;
        if(i)
        {
            i = i->next;
        }
    }
    return j;
}
