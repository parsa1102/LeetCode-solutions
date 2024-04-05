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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<ListNode *> s;
        ListNode * it = head;
        ListNode * last = nullptr;
        bool flag = false;
        int i = 1;
        while(i){
            if(k == s.size()){
                if(!flag){
                    head = s.top();
                    flag = true;
                }
                if(nullptr != last){
                    last->next = s.top();
                }
                while(0 != s.size()){
                    auto const & tmp = s.top();
                    s.pop();
                    if(0 != s.size()){
                        tmp->next = s.top();
                    }
                    else{
                        tmp->next = it;
                        last = tmp;
                        if(nullptr == it){
                            return head;
                            // break;
                        }
                    }
                }
            }
            else{
                s.push(it);
                cout<<i<<'\n';
                it = it->next;
                if(nullptr == it && s.size() < k){
                    break;
                }
            }
            i++;
        }
        return head;
    }
};
