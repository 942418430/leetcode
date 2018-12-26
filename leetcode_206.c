struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* ret = NULL;
    struct ListNode* tmp;
    while(head)
    {
        tmp = head;
        head = head->next;
        tmp->next = ret;
        ret = tmp;
       
    }
    return ret;
}
