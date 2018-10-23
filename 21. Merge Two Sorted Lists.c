struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *list = NULL;
    struct ListNode *pointer = NULL;
    struct ListNode *pointer1 = l1;
    struct ListNode *pointer2 = l2;
    while (pointer1 && pointer2) {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (pointer1->val > pointer2->val) {
            node->val = pointer2->val;
            node->next= NULL;
            pointer2 = pointer2->next;
        } else {
            node->val = pointer1->val;
            node->next= NULL;
            pointer1 = pointer1->next;
        }
        if (pointer) {
            pointer->next = node;
        }
        pointer = node;
        if (!list) {
            list = pointer;
        }
    }

    while (pointer1) {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = pointer1->val;
        node->next= NULL;
        pointer1 = pointer1->next;
        if (pointer) {
            pointer->next = node;
        }
        pointer = node;
        if (!list) {
            list = pointer;
        }
    }

    while (pointer2) {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = pointer2->val;
        node->next= NULL;
        pointer2 = pointer2->next;
        if (pointer) {
            pointer->next = node;
        }
        pointer = node;
        if (!list) {
            list = pointer;
        }
    }

    return list;
}
