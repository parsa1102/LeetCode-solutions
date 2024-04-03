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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * begin = new ListNode();
        auto curr = begin;
        while(true){
            int mn = 1e4 + 10;
            int idx = -1;
            bool nonnull = false;
            for(int i = 0;i<lists.size();i++){
                if(lists[i] != nullptr){
                    nonnull = true;
                    if(lists[i]->val < mn){
                        mn = lists[i]->val;
                        idx = i;
                    }
                }
            }
            if(nonnull == false){
                break;
            }
            curr->next = lists[idx];
            curr = lists[idx];
            lists[idx] = lists[idx]->next;
        }
        return begin->next;
    }
};
