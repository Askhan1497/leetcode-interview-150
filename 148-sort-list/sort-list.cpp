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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) 
            return head;
        ListNode* dummy = head;
        ListNode* final = head;

        vector<int> v;
        while(dummy){
            v.push_back(dummy->val);
            dummy = dummy->next;
        }
        sort(v.begin(), v.end());

        int n = v.size();

        for(int i=0; i<n; i++){
            final->val = v[i];
            final = final->next;
        }

        return head;
    }
};