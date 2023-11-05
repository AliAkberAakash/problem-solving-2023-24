class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = NULL;
        ListNode* newHead = NULL;

        while(head != NULL) {
            temp = head->next;
            head->next = newHead;
            newHead = head;
            head = temp;
        }

        return newHead;
    }
};
