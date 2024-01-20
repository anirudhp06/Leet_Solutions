/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode* NODE;

NODE getnode() {
    return (struct ListNode*)malloc(sizeof(struct ListNode));
}

NODE insert(int value, NODE first) {
    NODE temp;
    temp = getnode();
    temp->val = value;
    temp->next = first;
    return temp;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    NODE result = NULL;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        int digit = sum % 10;

        result = insert(digit, result);
    }

    // Reverse the linked list to get the correct order
    NODE current = result;
    NODE prev = NULL;
    NODE next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; // prev is now the head of the reversed list
}
