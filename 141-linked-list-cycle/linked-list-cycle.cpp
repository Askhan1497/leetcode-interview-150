/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *high = head;
        ListNode *low = head;
        while(high != NULL && high->next != NULL)
        {
            high = high->next->next;
            low = low->next;
            if(high == low) return true;
        }
        return false;
    }
};