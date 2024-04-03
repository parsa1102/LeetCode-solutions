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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(nullptr == list1){
            return list2;
        }
        if(nullptr == list2){
            return list1;
        }
        ListNode * ret;
        if(list1->val < list2->val){
            ret = list1;
            list1 = list1->next;
        }
        else{
            ret = list2;
            list2 = list2->next;
        }
        ListNode * curr = ret;
        while(nullptr != list1 || nullptr != list2){
            if(nullptr == list1){
                curr->next = list2;
                curr = list2;
                list2 = list2->next;
                continue;
            }
            if(nullptr == list2){
                curr->next = list1;
                curr = list1;
                list1 = list1->next;
                continue;
            }
            if(list1->val < list2->val){
                curr->next = list1;
                curr = list1;
                list1 = list1->next;
                continue;
            }
            else{
                curr->next = list2;
                curr = list2;
                list2 = list2->next;
                continue;
            }
        }
        return ret;
    }
};
