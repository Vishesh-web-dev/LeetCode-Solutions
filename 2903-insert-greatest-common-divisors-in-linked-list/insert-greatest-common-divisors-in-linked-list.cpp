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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head, *curr = head->next;
        if(curr == nullptr){
            return head;
        }
        while(curr != nullptr){
            int currGcd = __gcd(prev->val, curr->val);
            ListNode* nodeToInsert = new ListNode(currGcd);
            nodeToInsert->next = curr;
            prev->next = nodeToInsert;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};