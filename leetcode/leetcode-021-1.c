/**
 * Merge Two Sorted Lists
 *
 *     * 注意传入参数为空时状态
 *     * 注意是否可以改变原来链表
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* newLists = NULL;
    struct ListNode* point = NULL;

    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    if(l1->val > l2->val) {
        newLists = l2;
        point = l2;
        l2 = l2->next;
    }else {
        newLists = l1;
        point = l1;
        l1 = l1->next;
    }

    while(l1 != NULL && l2 != NULL) {
        if(l1->val > l2->val) {
            point->next = l2;
            point = l2;
            l2 = l2->next;
        }else {
            point->next = l1;
            point = l1;
            l1 = l1->next;
        }
    }

    if(l1 != NULL) point->next = l1;
    if(l2 != NULL) point->next = l2;

    return newLists;
}
