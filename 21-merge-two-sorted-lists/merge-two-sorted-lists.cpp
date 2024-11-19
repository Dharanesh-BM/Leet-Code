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
        ListNode *finalList = new ListNode();
        ListNode *result = finalList;
        while(list1 && list2){
            if(list1->val <= list2->val){
                finalList->next = list1;
                list1 = list1->next;
            } else {
                finalList->next = list2;
                list2 = list2->next;
            }
            finalList = finalList->next;
        }
        if(list1){
            while(list1){
                finalList->next = list1;
                list1 = list1->next;
                finalList = finalList->next;
            }
        }
        if(list2){
            while(list2){
                finalList->next = list2;
                list2 = list2->next;
                finalList = finalList->next;
            }
        }

        return result->next;
    }
};