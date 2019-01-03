/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    //后一个节点的复制给此节点
    node->val = node->next->val;
    node->next = node->next->next;
    return node;
}
