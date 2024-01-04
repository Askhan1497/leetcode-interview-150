/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head || !head->next)
            return head;
        queue<int> smaller;
        queue<int> greater;
        ListNode* temp = head;
        while (temp) {
            if (temp->val < x)
                smaller.push(temp->val);
            else
                greater.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (temp) {
            if (!smaller.empty()) {
                temp->val = smaller.front();
                smaller.pop();
            } else {
                temp->val = greater.front();
                greater.pop();
            }
            temp = temp->next;
        }

        return head;
    }
};