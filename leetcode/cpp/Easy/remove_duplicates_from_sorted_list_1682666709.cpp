class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        while (current && current->next) {
            if (current->val == current->next->val) {
                // Duplicate found, remove it
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // optional: free memory
            } else {
                current = current->next;
            }
        }

        return head;
    }
};
