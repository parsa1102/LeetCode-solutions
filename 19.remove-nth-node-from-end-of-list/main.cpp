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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * toDel = head;
        ListNode * front = head;
        int cnt = n;
        while(cnt--){
            front = front->next;
            if(nullptr == front){
                return head->next;
            }
        }
        while(front->next != nullptr){
            front = front->next;
            toDel = toDel->next;
        }
        toDel->next = toDel->next->next;
        return head;
    }
};
