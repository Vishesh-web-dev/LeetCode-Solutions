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
    int len(ListNode* curr){
        int len = 0;
        while(curr!=nullptr){
            len++;
            curr = curr->next;
        }
        return len;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = len(head);
        int partSize = n/k;
        int remain = n%k;
        vector<ListNode*> ans;
        while(head != nullptr){
            ListNode* part = head;
            ListNode* prev;
            for(int i = 0 ; i < partSize ; i++){
                prev = head;
                head = head->next;
            }
            if(remain!=0){
                remain--;
                prev = head;
                head = head->next;
            }
            prev->next = nullptr;
            ans.push_back(part);
        }
        while(ans.size()!=k){
            ListNode* part = nullptr;
            ans.push_back(part);
        }        
        return ans;
    }
};