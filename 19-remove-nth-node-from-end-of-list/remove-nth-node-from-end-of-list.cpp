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
    int count_nodes(ListNode* head){
        int count = 0;

        while(head){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int no = count_nodes(head);

        if(no == n){
            return head->next;
        }

        ListNode* curr = head;

        for(int i =1; i <= no - n -1; i++){
            curr = curr->next;
        }

        ListNode* temp = curr->next;

        curr->next = temp->next;

        temp->next = NULL;

        delete temp;

        return head;
    }
};